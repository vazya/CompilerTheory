#include <cassert>
#include <memory>
#include "EseqUpperVisitor.h"

#define NEW std::make_shared


namespace IRTree {

	static bool isNop( std::shared_ptr<IRTStatement> value )
	{
		std::shared_ptr<IRTSExp> exp = std::dynamic_pointer_cast<IRTSExp>(value);
		return exp != 0 && std::dynamic_pointer_cast<IRTree::IRTEConst>(exp->GetExp()) != 0;
	}

	bool Commute( std::shared_ptr<IRTStatement> a, std::shared_ptr<IRTExpression> b )
	{
		return isNop( a ) || std::dynamic_pointer_cast<IRTEName>(b) != 0
			|| std::dynamic_pointer_cast<IConst>(b) != 0;
	}

	//-----------------------------------------------------------------------------------------------------------------

	CEseqUpperVisitor::CEseqUpperVisitor( std::shared_ptr<CFrame> _frame ) : frame( _frame )
	{
	}
	void CEseqUpperVisitor::Visit( const IRTExpList * node )
	{
		startMethod();
		returnExpression = NEW<IRTExpList>( visitExpression<IRTExpression>( node->GetHead() ), visitExpression<IRTExpList>( node->GetTail() ) );
	}

	void CEseqUpperVisitor::Visit( const IRTEConst * node )
	{
		startMethod();
		returnExpression = NEW<IRTEConst>( node->GetValue() );
	}

	void CEseqUpperVisitor::Visit( const IRTEName * node )
	{
		startMethod();
		returnExpression = NEW<IRTEName>( node->GetLabel() );
	}

	void CEseqUpperVisitor::Visit( const IRTETemp * node )
	{
		startMethod();
		returnExpression = NEW<IRTETemp>( node->GetTemp() );
	}

	void CEseqUpperVisitor::Visit( const IRTEBinop * node )
	{
		startMethod();
		RELOP op = node->GetBinop();
		std::shared_ptr<IRTExpression> eleft = visitExpression<IRTExpression>( node->GetLeft() );
		std::shared_ptr<IRTExpression> eright = visitExpression<IRTExpression>( node->GetRight() );
		std::shared_ptr<IRTEEseq> eseq = std::dynamic_pointer_cast<IRTEEseq>(eleft);
		if( eseq ) {
			std::shared_ptr<IRTStatement> s = eseq->GetStm();
			std::shared_ptr<IRTExpression> e1 = eseq->GetExp();
			std::shared_ptr<IRTEBinop> binop = NEW<IRTEBinop>( op, e1, eright );
			returnExpression = NEW<IRTEEseq>( s, binop );
		} else {
			eseq = std::dynamic_pointer_cast<IRTEEseq>(eright);
			if( eseq ) {
				std::shared_ptr<IRTStatement> s = eseq->GetStm();
				std::shared_ptr<IRTExpression> e2 = eseq->GetExp();
				if( Commute( s, NEW<IRTExpList>( eleft, nullptr ) ) ) {
					returnExpression = NEW<IRTEEseq>( s, NEW<IRTEBinop>( op, eleft, e2 ) );
				} else {
					std::shared_ptr<IRTETemp> t = NEW<IRTETemp>( NEW<Temp>( frame->NewTemp() ) );
					std::shared_ptr<IRTSMove> move = NEW<IRTSMove>( t, eleft );
					std::shared_ptr<IRTEBinop> binop = NEW<IRTEBinop>( op, t, e2 );
					returnExpression = NEW<IRTEEseq>( move, NEW<IRTEEseq>( s, binop ) );
				}
			} else {
				returnExpression = NEW<IRTEBinop>( op, eleft, eright );
			}
		}
	}

	void CEseqUpperVisitor::Visit( const IRTEMem * node )
	{
		startMethod();
		std::shared_ptr<IRTExpression> exp = visitExpression<IRTExpression>( node->GetExp() );
		std::shared_ptr<IRTEEseq> eseq = std::dynamic_pointer_cast<IRTEEseq>(exp);
		if( eseq ) {
			std::shared_ptr<IRTStatement> s = eseq->GetStm();
			std::shared_ptr<IRTExpression> e1 = eseq->GetExp();
			returnExpression = NEW<IRTEEseq>( s, NEW<IRTEMem>( e1 ) );
		} else {
			returnExpression = NEW<IRTEMem>( exp );
		}
	}

	void CEseqUpperVisitor::Visit( const IRTECall * node )
	{
		startMethod();
		std::shared_ptr<IRTExpList> args = visitExpression<IRTExpList>( node->GetArgs() );
		std::shared_ptr<IRTECall> call = std::dynamic_pointer_cast<IRTECall>(args->GetHead());
		if( call ) {
			std::shared_ptr<IRTETemp> newTemp = NEW<IRTETemp>( NEW<Temp>( frame->NewTemp() ) );
			returnExpression = NEW<IRTEEseq>( NEW<IRTSMove>( call, newTemp ),
				NEW<IRTECall>( visitExpression<IRTExpression>( node->GetFunc() ), NEW<IRTExpList>( newTemp, args->GetTail() ) ) );
		} else {
			returnExpression = NEW<IRTECall>( visitExpression<IRTExpression>( node->GetFunc() ), node->GetArgs() );
		}
	}

	void CEseqUpperVisitor::Visit( const IRTEEseq * node )
	{
		startMethod();
		std::shared_ptr<IRTStatement> s1 = visitStatement<IRTStatement>( node->GetStm() );
		std::shared_ptr<IRTExpression> exp = visitExpression<IRTExpression>( node->GetExp() );
		std::shared_ptr<IRTEEseq> eseq = std::dynamic_pointer_cast<IRTEEseq>(exp);
		if( eseq ) {
			std::shared_ptr<IRTStatement> s2 = eseq->GetStm();
			std::shared_ptr<IRTExpression> e = eseq->GetExp();
			returnExpression = NEW<IRTEEseq>( NEW<IRTSSeq>( s1, s2 ), e );
		} else {
			returnExpression = NEW<IRTEEseq>( s1, exp );
		}
	}

	void CEseqUpperVisitor::Visit( const IRTSMove * node )
	{
		startMethod();
		std::shared_ptr<IRTExpression> dist = visitExpression<IRTExpression>( node->GetExrDst() );
		std::shared_ptr<IRTExpression> sourse = visitExpression<IRTExpression>( node->GetExrSrc() );
		std::shared_ptr<IRTEEseq> eseq = std::dynamic_pointer_cast<IRTEEseq>(sourse);
		if( eseq != 0 ) {
			std::shared_ptr<IRTStatement> s = eseq->GetStm();
			std::shared_ptr<IRTExpression> e = eseq->GetExp();
			returnStatement = NEW<IRTSSeq>( s, NEW<IRTSMove>( dist, e ) );
		} else {
			std::shared_ptr<IRTEEseq> eseq = std::dynamic_pointer_cast<IRTEEseq>(dist);
			if( eseq != 0 ) {
				std::shared_ptr<IRTStatement> s = eseq->GetStm();
				std::shared_ptr<IRTExpression> e = eseq->GetExp();
				returnStatement = NEW<IRTSSeq>( s, NEW<IRTSMove>( e, sourse ) );
			} else {
				returnStatement = NEW<IRTSMove>( dist, sourse );
			}
		}
	}

	void CEseqUpperVisitor::Visit( const IRTSExp * node )
	{
		startMethod();
		std::shared_ptr<IRTExpression> exp = visitExpression<IRTExpression>( node->GetExp() );
		std::shared_ptr<IRTEEseq> eseq = std::dynamic_pointer_cast<IRTEEseq>(exp);
		if( eseq ) {
			std::shared_ptr<IRTStatement> s = eseq->GetStm();
			std::shared_ptr<IRTExpression> e = eseq->GetExp();
			returnStatement = NEW<IRTSSeq>( s, NEW<IRTSExp>( e ) );
		} else {
			returnStatement = NEW<IRTSExp>( exp );
		}
	}

	void CEseqUpperVisitor::Visit( const IRTSJump * node )
	{
		startMethod();
		returnStatement = NEW<IRTSJump>( node->GetLabel() );
	}

	void CEseqUpperVisitor::Visit( const IRTSCjump * node )
	{
		startMethod();
		std::shared_ptr<IRTExpression> expLeft = visitExpression<IRTExpression>( node->GetExpLeft() );
		std::shared_ptr<IRTEEseq> eseq = std::dynamic_pointer_cast<IRTEEseq>(expLeft);
		RELOP op = node->GetRelop();
		std::shared_ptr<Label> l1 = node->GetLabelLeft();
		std::shared_ptr<Label> l2 = node->GetLabelRight();
		if( eseq ) {
			std::shared_ptr<IRTStatement> s = eseq->GetStm();
			std::shared_ptr<IRTExpression> e1 = eseq->GetExp();
			std::shared_ptr<IRTExpression> e2 = visitExpression<IRTExpression>( node->GetExpRight() );
			returnStatement = NEW<IRTSSeq>( s, NEW<IRTSCjump>( op, e1, e2, l1, l2 ) );
		} else {
			std::shared_ptr<IRTExpression> expRight = visitExpression<IRTExpression>( node->GetExpRight() );
			eseq = std::dynamic_pointer_cast<IRTEEseq>(expRight);
			if( eseq ) {
				std::shared_ptr<IRTExpression> e1 = expLeft;
				std::shared_ptr<IRTExpression> e2 = eseq->GetExp();
				std::shared_ptr<IRTStatement> s = eseq->GetStm();
				if( Commute( s, NEW<IRTExpList>( e1, nullptr ) ) ) {
					returnStatement = NEW<IRTSSeq>( s, NEW<IRTSCjump>( op, e1, e2, l1, l2 ) );
				} else {
					std::shared_ptr<IRTETemp> t = NEW<IRTETemp>( NEW<Temp>( frame->NewTemp() ) );
					returnStatement = NEW<IRTSSeq>( NEW<IRTSMove>( t, e1 ), NEW<IRTSSeq>( s, NEW<IRTSCjump>(
						op, t, e2, l1, l2 ) ) );
				}
			} else {
				returnStatement = NEW<IRTSCjump>( op, expLeft, expRight, l1, l2 );
			}
		}
	}

	static void rightRotate( std::shared_ptr<IRTStatement>& left, std::shared_ptr<IRTStatement>& right )
	{
		std::shared_ptr<IRTSSeq> leftSeq;
		while( (leftSeq = std::dynamic_pointer_cast<IRTSSeq>(left)) != 0 ) {
			left = leftSeq->GetStmLeft();
			std::shared_ptr<IRTStatement> _left = leftSeq->GetStmRight();
			rightRotate( _left, right );
			right = NEW<IRTSSeq>( _left, right );
		}
	}

		void CEseqUpperVisitor::Visit( const IRTSSeq * node )
	{
		startMethod();
		std::shared_ptr<IRTStatement> left = visitStatement<IRTStatement>( node->GetStmLeft() );
		std::shared_ptr<IRTStatement> right = visitStatement<IRTStatement>( node->GetStmRight() );
		rightRotate( left, right );
		returnStatement = NEW<IRTSSeq>( left, right );
	}

	void CEseqUpperVisitor::Visit( const IRTSLabel * node )
	{
		startMethod();
		returnStatement = NEW<IRTSLabel>( node->GetLabel() );
	}

	void CEseqUpperVisitor::Visit( const IAccess * node )
	{
		startMethod();
		returnExpression = NEW<IAccess>( *node );

	}

	void CEseqUpperVisitor::Visit( const IRTEConstBool * node )
	{
		startMethod();
		returnExpression = NEW<IRTEConstBool>( node->GetValue() );
	}


	std::shared_ptr<IRTStatement> CEseqUpperVisitor::GetResult()
	{
		return returnStatement;
	}

	void CEseqUpperVisitor::startVisit()
	{
		assert( returnExpression == 0 );
		assert( returnStatement == 0 );
	}

	void CEseqUpperVisitor::startMethod()
	{
		assert( returnExpression == 0 );
		assert( returnStatement == 0 );
	}
}