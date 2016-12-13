#include "IRTEConst.h"

IRTree::IRTEConst::IRTEConst( unsigned int _value ) : value( _value )
{
}

unsigned int IRTree::IRTEConst::GetValue() const
{
	return value;
}

void IRTree::IRTEConst::Accept( IIRTreeVisitor *visitor ) const
{
	visitor->Visit( this );
}

const IRTree::IRTExpList* IRTree::IRTEConst::children() const
{
	return nullptr;
}