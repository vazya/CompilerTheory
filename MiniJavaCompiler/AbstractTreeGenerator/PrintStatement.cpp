#include "PrintStatement.h"
#include <memory>

AbstractTreeGenerator::CPrintStatement::CPrintStatement(IExpression*
	_expression) : expression(_expression) {

}

AbstractTreeGenerator::CPrintStatement::~CPrintStatement()
{
}

std::shared_ptr<AbstractTreeGenerator::IExpression> AbstractTreeGenerator::CPrintStatement::GetExpression() const {
	return expression;
}

void AbstractTreeGenerator::CPrintStatement::Accept(IVisitor* v) {
	v->visit(this);
}
const std::shared_ptr<AbstractTreeGenerator::IExpression> AbstractTreeGenerator::CPrintStatement::GetExpression() const
{
	 return expression;
}

