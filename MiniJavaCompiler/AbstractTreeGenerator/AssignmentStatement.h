#pragma once
#include "IdExpression.h"
#include "IStatement.h"
#include <memory>


namespace AbstractTreeGenerator {
	class CAssignmentStatement : public IStatement {
	public:
		CAssignmentStatement( std::shared_ptr<CIdExpression> theIdExpression,
			std::shared_ptr<IExpression> theExpression );
		virtual ~CAssignmentStatement();

		virtual void Accept(IVisitor* v) override;
	private:
		std::shared_ptr<CIdExpression> idExpression;
		std::shared_ptr<IExpression> expression;
	};
}
