#pragma once

namespace AbstractTreeGenerator {
	class CArgument;
	class CArgumentList;
	class CAssignmentListStatement;
	class CAssignmentStatement;
	class CClassDeclaration;
	class CClassDeclarationList;
	class CClassExtend;
	class CCompoundStatement;
	class CConstructorExpression;
	class CExpressionList;
	class CINTEGER_LITERAL;
	class CIdExpression;
	class CIndexExpression;
	class CLastExpressionList;
	class CLengthExpression;
	class CListConstructorExpression;
	class CMainClass;
	class CMethodDeclaration;
	class CMethodDeclarationList;
	class CNegationExpression;
	class CNumberExpr;
	class COperationExpression;
	class CParenExpression;
	class CPreconditionStatement;
	class CPrintStatement;
	class CProgram;
	class CStatementList;
	class CBasicType;
	class CIdType;
	class CVarDeclaration;
	class CVarDeclarationList;
	class CTrueExpression;
	class CFalseExpression;
	class CGetFieldExpression;
	class CConditionStatement;
	class CThisExpression;

	class IVisitor {
	public:
		virtual void visit( CArgument* const ) = 0;
		virtual void visit( CArgumentList* const ) = 0;
		virtual void visit( CAssignmentListStatement* const ) = 0;
		virtual void visit( CAssignmentStatement* const ) = 0;
		virtual void visit( CClassDeclaration* const ) = 0;
		virtual void visit( CClassDeclarationList* const ) = 0;
		virtual void visit( CClassExtend* const ) = 0;
		virtual void visit( CCompoundStatement* const ) = 0;
		virtual void visit( CConstructorExpression* const ) = 0;
		virtual void visit( CExpressionList* const ) = 0;
		virtual void visit( CIdExpression* const ) = 0;
		virtual void visit( CIndexExpression* const ) = 0;
		virtual void visit( CLastExpressionList* const ) = 0;
		virtual void visit( CLengthExpression* const ) = 0;
		virtual void visit( CListConstructorExpression* const ) = 0;
		virtual void visit( CMainClass* const ) = 0;
		virtual void visit( CMethodDeclaration* const ) = 0;
		virtual void visit( CMethodDeclarationList* const ) = 0;
		virtual void visit( CNegationExpression* const ) = 0;
		virtual void visit( CNumberExpr* const ) = 0;
		virtual void visit( COperationExpression* const ) = 0;
		virtual void visit( CParenExpression* const ) = 0;
		virtual void visit( CPreconditionStatement* const ) = 0;
		virtual void visit( CPrintStatement* const ) = 0;
		virtual void visit( CProgram* const ) = 0;
		virtual void visit( CStatementList* const ) = 0;
		virtual void visit( CBasicType* const ) = 0;
		virtual void visit( CIdType* const ) = 0;
		virtual void visit( CVarDeclaration* const ) = 0;
		virtual void visit( CVarDeclarationList* const ) = 0;
		virtual void visit( CTrueExpression* const ) = 0;
		virtual void visit( CFalseExpression* const ) = 0;
		virtual void visit( CGetFieldExpression* const ) = 0;
		virtual void visit( CConditionStatement* const ) = 0;;
		virtual void visit( CThisExpression* const ) = 0;
	};
}