#pragma once

#include <memory>
#include "Type.h"
#include "IdExpression.h"

namespace AbstractTreeGenerator {
	class CArgument : public INode {
	public:
		CArgument( std::shared_ptr<CType> theType,
			std::shared_ptr<CIdExpression> theIdExpression );
		virtual ~CArgument();

		virtual void Accept( IVisitor*v ) override;
	private:
		std::shared_ptr<CType> type;
		std::shared_ptr<CIdExpression> idExpression;
	};
}
