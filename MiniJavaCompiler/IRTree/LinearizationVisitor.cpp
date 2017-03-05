#include <cassert>
#include <memory>
#include "LinearizationVisitor.h"

#define NEW std::make_shared


namespace IRTree {
	static bool isNop( std::shared_ptr<IRTStatement> value )
	{
		std::shared_ptr<IRTSExp> exp = std::dynamic_pointer_cast<IRTSExp>(value);
		return exp != 0 && std::dynamic_pointer_cast<IRTree::IRTEConst>(exp->GetExp()) != 0;
	}

	static bool commute( std::shared_ptr<IRTStatement> a, std::shared_ptr<IRTExpList> b )
	{
		return isNop( a ) || std::dynamic_pointer_cast<IRTEName>(b) != 0
			|| std::dynamic_pointer_cast<IConst>(b) != 0;
	}

	//-----------------------------------------------------------------------------------------------------------------

	CLinearizationVisitor::CLinearizationVisitor( std::shared_ptr<CFrame> _frame ) : frame( _frame ), hasCall( false )
	{
	}
	void CLinearizationVisitor::Visit( const IRTExpList * node )
	{
		startMethod();
		std::shared_ptr<Temp> temp( NEW<Temp>( frame->NewTemp() ) );
		auto result = NEW<IRTExpList>( NEW<IRTETemp>( temp ), visitExpression<IRTExpList>( node->GetTail() ) );
		arguments.push_back( visitExpression<IRTExpression>( node->GetHead() ) );
		temps.push_back( temp );
		returnExpression = result;
	}

	void CLinearizationVisitor::Visit( const IRTEConst * node )
	{
		startMethod();
		returnExpression = NEW<IRTEConst>( node->GetValue() );
	}

	void CLinearizationVisitor::Visit( const IRTEName * node )
	{
		startMethod();
		returnExpression = NEW<IRTEName>( node->GetLabel() );
	}

	void CLinearizationVisitor::Visit( const IRTETemp * node )
	{
		startMethod();
		returnExpression = NEW<IRTETemp>( node->GetTemp() );
	}

	void CLinearizationVisitor::Visit( const IRTEBinop * node )
	{
		startMethod();
		returnExpression = NEW<IRTEBinop>( node->GetBinop(), visitExpression<IRTExpression>( node->GetLeft() ), visitExpression<IRTExpression>( node->GetRight() ) );
	}

	void CLinearizationVisitor::Visit( const IRTEMem * node )
	{
		startMethod();
		returnExpression = NEW<IRTEMem>( visitExpression<IRTExpression>( node->GetExp() ) );
	}

	void CLinearizationVisitor::Visit( const IRTECall * node )
	{
		startMethod();

		auto oldArguments = arguments;
		auto oldTemps = temps;

		std::shared_ptr<IRTExpList> args = visitExpression<IRTExpList>( node->GetArgs() );

		returnExpression = regenerate( NEW<IRTECall>( visitExpression<IRTExpression>( node->GetFunc() ), visitExpression<IRTExpList>( node->GetArgs() ) ),
			oldArguments, oldTemps );

		hasCall = true;
	}

	void CLinearizationVisitor::Visit( const IRTEEseq * node )
	{
		startMethod();
		returnExpression = NEW<IRTEEseq>( visitStatement<IRTStatement>( node->GetStm() ), visitExpression<IRTExpression>( node->GetExp() ) );
	}

	void CLinearizationVisitor::Visit( const IRTSMove * node )
	{
		startMethod();
		returnStatement = NEW<IRTSMove>( visitExpression<IRTExpression>( node->GetExrDst() ), visitExpression<IRTExpression>( node->GetExrSrc() ) );
	}

	void CLinearizationVisitor::Visit( const IRTSExp * node )
	{
		startMethod();
		returnStatement = NEW<IRTSExp>( visitExpression<IRTExpression>( node->GetExp() ) );
	}

	void CLinearizationVisitor::Visit( const IRTSJump * node )
	{
		startMethod();
		returnStatement = NEW<IRTSJump>( node->GetLabel() );
	}

	void CLinearizationVisitor::Visit( const IRTSCjump * node )
	{
		startMethod();
		returnStatement = NEW<IRTSCjump>( node->GetRelop(), visitExpression<IRTExpression>( node->GetExpLeft() ), visitExpression<IRTExpression>( node->GetExpRight() ),
			node->GetLabelLeft(), node->GetLabelRight() );
	}

	void CLinearizationVisitor::Visit( const IRTSSeq * node )
	{
		startMethod();
		returnStatement = NEW<IRTSSeq>( visitStatement<IRTStatement>( node->GetStmLeft() ), visitStatement<IRTStatement>( node->GetStmRight() ) );
	}

	void CLinearizationVisitor::Visit( const IRTSLabel * node )
	{
		startMethod();
		returnStatement = NEW<IRTSLabel>( node->GetLabel() );
	}

	void CLinearizationVisitor::Visit( const IAccess * node )
	{
		startMethod();
		returnExpression = NEW<IAccess>( *node );

	}

	void CLinearizationVisitor::Visit( const IRTEConstBool * node )
	{
		startMethod();
		returnExpression = NEW<IRTEConstBool>( node->GetValue() );
	}

	std::shared_ptr<IRTStatement> CLinearizationVisitor::GetResult()
	{
		return returnStatement;
	}

	std::shared_ptr<IRTExpression> CLinearizationVisitor::regenerate( std::shared_ptr<IRTExpression> node, std::vector<std::shared_ptr<IRTExpression>>& oldArgumntes,
		std::vector<std::shared_ptr<Temp>>& oldTemps )
	{
		assert( arguments.size() == temps.size() );

		for( int i = 0; i < arguments.size(); i++ ) {
			node = NEW<IRTEEseq>( NEW<IRTSMove>( NEW<IRTETemp>( temps[i] ), arguments[i] ), node );
		}

		arguments = oldArgumntes;
		temps = oldTemps;
		return node;
	}

	void CLinearizationVisitor::startVisit()
	{
		assert( returnExpression == 0 );
		assert( returnStatement == 0 );
	}

	void CLinearizationVisitor::startMethod()
	{
		assert( arguments.size() == temps.size() );
		assert( returnExpression == 0 );
		assert( returnStatement == 0 );
	}
}