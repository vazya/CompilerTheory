#pragma once

#include "..\IRTExpression.h"

namespace IRTree {

	class IRTEConst : public IRTExpression {
	public:

		IRTEConst(unsigned int _value);

		unsigned int GetValue() const;

        void Accept( IVisitor* visitor ) const override;

	private:

		const unsigned int value;

	};
}