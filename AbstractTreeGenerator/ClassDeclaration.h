#pragma once
#include "IdExpression.h"
#include "ClassExtend.h"
#include "VarDeclarationList.h"
#include "MethodDeclarationList.h"
#include <memory>

namespace FirstTask {
	class CClassDeclaration {
	public:
		CClassDeclaration( std::shared_ptr<CIdExpression> theIdExpression,
			std::shared_ptr<CClassExtend> theClassExtend, 
			std::shared_ptr<CVarDeclarationList> theVarDeclarationList,
			std::shared_ptr<CMethodDeclarationList> theMethodDeclarationList );
		virtual ~CClassDeclaration();

		//		virtual void Accept(IVisitor*) override;
	private:
		std::shared_ptr<CIdExpression> idExpression;
		std::shared_ptr<CClassExtend> classExtend;
		std::shared_ptr<CVarDeclarationList> varDeclarationList;
		std::shared_ptr<CMethodDeclarationList> methodDeclarationList;
	};
}