#include "IRTEEseq.h"

IRTree::IRTEEseq::IRTEEseq( cconst IRTStatement* _stm, const IRTExpression* _exp )
	stm( _stm ), exp( _exp )
{
}

const IRTree::IRTStatement* IRTree::IRTEEseq::GetStm() const
{
	return stm;
}

const IRTree::IRTExpression* IRTree::IRTEEseq::GetExp() const
{
	return exp;
}

void IRTree::IRTEEseq::Accept( IIRTreeVisitor *visitor ) const
{
	visitor->Visit( this );
}

const IRTree::IRTExpList* IRTree::IRTEEseq::children() const
{
	return nullptr;
}