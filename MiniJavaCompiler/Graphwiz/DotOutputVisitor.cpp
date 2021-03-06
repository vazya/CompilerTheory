﻿#include <string>
#include <cassert>

#include "DotOutputVisitor.h"
#include "..\AbstractTreeGenerator\AllNodes.h"

extern std::shared_ptr<AbstractTreeGenerator::CStringTable> glabalStringTable;

namespace GraphvizOutput {

	CDotOutputVisitor::CDotOutputVisitor( const std::wstring & _header ) : CBaseDotOutput( _header )
	{
	}

	CDotOutputVisitor::~CDotOutputVisitor()
	{
	}

	void CDotOutputVisitor::visit( AbstractTreeGenerator::CAssignmentStatement * const assignmentStatement )
	{
		visitBinaryNode( "AssignmentStatement", assignmentStatement->GetIdExpression().get(),
			assignmentStatement->GetExpression().get() );
	}

	void CDotOutputVisitor::visit( AbstractTreeGenerator::CClassDeclaration * const classDeclaration )
	{
		size_t id = enterNode( "ClassDeclaration" );
		addChild( id, classDeclaration->GetIdExpression().get() );
		addChild( id, classDeclaration->GetClassExtend().get() );
		addChild( id, classDeclaration->GetVarDeclarationList().get() );
		addChild( id, classDeclaration->GetMethodDeclarationList().get() );
	}

	void CDotOutputVisitor::visit( AbstractTreeGenerator::CClassDeclarationList * const list )
	{
		visitBinaryNode( "ClassDeclarationList", list->GetClassDeclaration().get(),
			list->GetClassDeclarationList().get() );
	}

	void CDotOutputVisitor::visit( AbstractTreeGenerator::CClassExtend * const extend )
	{
		visitUnaryNode( "ClassExtend", extend->GetIdExpression().get() );
	}

	void CDotOutputVisitor::visit( AbstractTreeGenerator::CCompoundStatement *const compoundStatement )
	{
		visitUnaryNode( "CompoundStatement", compoundStatement->GetStatementList().get() );
	}

	void CDotOutputVisitor::visit( AbstractTreeGenerator::CConstructorExpression * const сonstructorExpression )
	{
		visitUnaryNode( "ConstructorExpression", сonstructorExpression->GetIdExpression().get() );
	}

	void CDotOutputVisitor::visit( AbstractTreeGenerator::CPreconditionStatement * const precondition )
	{
		visitBinaryNode( "PreconditionStatement", precondition->GetExpression().get(),
			precondition->GetStatement().get() );

	}

	void CDotOutputVisitor::visit( AbstractTreeGenerator::CPrintStatement *const printStatement )
	{
		visitUnaryNode( "PrintStatement", printStatement->GetExpression().get() );
	}

	void CDotOutputVisitor::visit( AbstractTreeGenerator::CProgram * const program )
	{
		visitBinaryNode( "Program", program->GetMainClass().get(),
			program->GetClassDeclarationList().get() );
	}

	void CDotOutputVisitor::visit( AbstractTreeGenerator::CStatementList * const statementList )
	{
		visitBinaryNode( "StatementList", statementList->GetStatement().get(),
			statementList->GetStatementList().get() );
	}

	void CDotOutputVisitor::visit( AbstractTreeGenerator::CVarDeclaration * const varDeclaration )
	{
		visitBinaryNode( "VarDeclaration", varDeclaration->GetType().get(),
			varDeclaration->GetIdExpression().get() );
	}

	void CDotOutputVisitor::visit( AbstractTreeGenerator::CVarDeclarationList * const list )
	{
		visitBinaryNode( "VarDeclarationList", list->GetVarDeclaration().get(),
			list->GetVarDeclarationList().get() );
	}

	void CDotOutputVisitor::visit( AbstractTreeGenerator::CTrueExpression * const )
	{
		enterNode( "TrueExpression" );
	}

	void CDotOutputVisitor::visit( AbstractTreeGenerator::CFalseExpression * const )
	{
		enterNode( "FalseExpression" );
	}

	void CDotOutputVisitor::visit( AbstractTreeGenerator::CGetFieldExpression * const get )
	{
		// Слишком много get ):
		visitTripleNode( "GetFieldExpression", get->GetIdExpression().get(),
			get->GetExpression().get(), get->GetExpressionList().get() );
	}

	void CDotOutputVisitor::visit( AbstractTreeGenerator::CConditionStatement * const condition )
	{
		// TODO разабраться, что это
		visitTripleNode( "ConditionStatement", condition->GetStatementFirst().get(), condition->GetExpression().get(),
			condition->GetStatementSecond().get() );
	}

	void CDotOutputVisitor::visit( AbstractTreeGenerator::CThisExpression * const )
	{
		enterNode( "ThisExpression" );
	}

	void CDotOutputVisitor::visit( AbstractTreeGenerator::CBasicType * const type )
	{
		size_t id = enterNode( "BasicType" );
		addSubNode( id, type->GetValue() );
	}

	void CDotOutputVisitor::visit( AbstractTreeGenerator::CIdType * const type )
	{
		visitUnaryNode( "IdType", type->GetIdExpression().get() );
	}

	void CDotOutputVisitor::visit( AbstractTreeGenerator::COperationExpression *const operationExpression )
	{
		size_t current = enterNode( "OperationExpression" );
		addChild( current, operationExpression->GetLeftOperand().get() );
		switch( operationExpression->GetOperationType() ) {
			case AbstractTreeGenerator::COperationExpression::Divide:
				addSubNode( current, "Divide" );
				break;
			case AbstractTreeGenerator::COperationExpression::Plus:
				addSubNode( current, "Plus" );
				break;
			case AbstractTreeGenerator::COperationExpression::Minus:
				addSubNode( current, "Minus" );
				break;
			case AbstractTreeGenerator::COperationExpression::Times:
				addSubNode( current, "Times" );
				break;
			case AbstractTreeGenerator::COperationExpression::And:
				addSubNode( current, "And" );
				break;
			case AbstractTreeGenerator::COperationExpression::Less:
				addSubNode( current, "Less" );
				break;
			case AbstractTreeGenerator::COperationExpression::Mod:
				addSubNode( current, "Mod" );
				break;
			case AbstractTreeGenerator::COperationExpression::Or:
				addSubNode( current, "Or" );
				break;
			default:
				assert( false );
		}
		addChild( current, operationExpression->GetRightOperand().get() );
	}

	void CDotOutputVisitor::visit( AbstractTreeGenerator::CParenExpression * const paren )
	{
		visitUnaryNode( "ParenExpression", paren->GetExpression().get() );
	}

	void CDotOutputVisitor::visit( AbstractTreeGenerator::CMethodDeclaration * const method )
	{
		size_t id = enterNode( "MethodDeclaration" );
		addChild( id, method->GetType().get() );
		addChild( id, method->GetIdExpression().get() );
		addChild( id, method->GetArgumentList().get() );
		addChild( id, method->GetVarDeclarationList().get() );
		addChild( id, method->GetStatementList().get() );
		addChild( id, method->GetExpression().get() );
	}

	void CDotOutputVisitor::visit( AbstractTreeGenerator::CMethodDeclarationList * const  list )
	{
		visitBinaryNode( "MethodDeclarationList", list->GetMethodDeclaration().get(),
			list->GetMethodDeclarationList().get() );
	}

	void CDotOutputVisitor::visit( AbstractTreeGenerator::CNegationExpression * const negatiation )
	{
		visitUnaryNode( "NegationExpression", negatiation->GetExpression().get() );
	}

	void CDotOutputVisitor::visit( AbstractTreeGenerator::CNumberExpr * const numExpression )
	{
		visitValueNode( "NumExpression", numExpression->GetValue() );
	}

	void CDotOutputVisitor::visit( AbstractTreeGenerator::CExpressionList * const expressionList )
	{
		visitBinaryNode( "ExpressionList", expressionList->GetExpression().get(),
			expressionList->GetExpressionList().get() );
	}

	void CDotOutputVisitor::visit( AbstractTreeGenerator::CIdExpression *const idExpression )
	{
		size_t current = enterNode( "IdExpression" );
		addSubNodeWithStringTable( current, idExpression->GetName() );
	}

	void CDotOutputVisitor::visit( AbstractTreeGenerator::CIndexExpression * const index )
	{
		visitBinaryNode( "IndexExpression", index->GetExpressionFirst().get(),
			index->GetExpressionSecond().get() );
	}

	void CDotOutputVisitor::visit( AbstractTreeGenerator::CLastExpressionList *const lastExpList )
	{
		visitUnaryNode( "LastExpressionList", lastExpList->GetExpression().get() );
	}

	void CDotOutputVisitor::visit( AbstractTreeGenerator::CLengthExpression * const length )
	{
		visitUnaryNode( "LengthExpression", length->GetExpression().get() );
	}

	void CDotOutputVisitor::visit( AbstractTreeGenerator::CListConstructorExpression * const listCtor )
	{
		visitUnaryNode( "ListConstructorExpression", listCtor->GetExpression().get() );
	}

	void CDotOutputVisitor::visit( AbstractTreeGenerator::CMainClass * const main )
	{
		visitTripleNode( "MainClass", main->GetClassName().get(), main->GetArgv().get(),
			main->GetStatement().get() );
	}

	void CDotOutputVisitor::visit( AbstractTreeGenerator::CArgument * const argument )
	{
		visitBinaryNode( "Argument", argument->GetType().get(), argument->GetIdExpression().get() );
	}

	void CDotOutputVisitor::visit( AbstractTreeGenerator::CArgumentList * const list )
	{
		visitBinaryNode( "ArgumentList", list->GetArgument().get(), list->GetArgumentList().get() );

	}

	void CDotOutputVisitor::visit( AbstractTreeGenerator::CAssignmentListStatement * const assigment )
	{
		visitTripleNode( "AssignmentListStatement", assigment->GetIdExpression().get(),
			assigment->GetExpressionFirst().get(), assigment->GetExpressionSecond().get() );

	}

	void CDotOutputVisitor::addSubNodeWithStringTable( size_t id, const size_t label, const std::wstring& postfix )
	{
		dotFile << L"\tn" << id << postfix << L"[label=\"(" << label << L"): '" << stringToWstring( glabalStringTable->find( label ) ) << L"'\"]" << std::endl;
		dotFile << L"\tn" << id << L" -> n" << id << postfix << L";" << std::endl;
	}

	void CDotOutputVisitor::addSubNodeWithStringTable( size_t id, const size_t label, const std::string& postfix )
	{
		addSubNodeWithStringTable( id, label, stringToWstring( postfix ) );
	}
}
