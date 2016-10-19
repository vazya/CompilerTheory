#include "Argument.h"

AbstractTreeGenerator::CArgument::CArgument( std::shared_ptr<CType> theType,
	std::shared_ptr<CIdExpression> theIdExpression ) :
	type( theType ), idExpression( theIdExpression )
{
}

AbstractTreeGenerator::CArgument::~CArgument()
{
}

void AbstractTreeGenerator::CArgument::Accept( IVisitor * v )
{
	v->Visit( this );
}
