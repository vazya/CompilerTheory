#include "IRTSExp.h"

IRTree::IRTSExp::IRTSExp( const IRTExpression* _exp ) : exp( _exp )
{
}

const IRTree::IRTExpression* IRTree::IRTSExp::GetExp() const
{
	return exp;
}

void IRTree::IRTSExp::Accept( IVisitor* visitor ) const
{
	visitor->Visit( this );
}