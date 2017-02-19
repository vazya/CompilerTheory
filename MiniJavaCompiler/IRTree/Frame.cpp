#include "Frame.h"
#include "IRTExpression.h"
#include "IRTLabel.h"
#include <memory>
#include <cassert>

namespace IRTree {

	CFrame::CFrame( int className, std::shared_ptr<Label> _label ) : className( className ), label( _label ), thisAccess( std::make_shared<IAccess>( ThisName, className, L"this" ) ),
		returnAccess( std::make_shared<IAccess>( ReturnName, className, L"return" ) )
	{
	}

	void CFrame::InsertVariable( int name, std::shared_ptr<IAccess> access )
	{
		variables.insert( std::pair<int, std::shared_ptr<IAccess>>( name, access ) );
	}

	std::shared_ptr<IAccess> CFrame::GetDataInfo( int name )
	{
		auto iter = variables.find( name );
		if( iter != variables.end() ) {
			return iter->second;
		} else {
			return 0;
		}
	}

	std::shared_ptr<Label> CFrame::GetLabel()
	{
		return label;
	}

	std::shared_ptr<IAccess> CFrame::GetThisAccess()
	{
		return thisAccess;
	}

	std::shared_ptr<IAccess> CFrame::GetReturnAccess()
	{
		return returnAccess;
	}

	const int CFrame::ThisName = -11;
	const int CFrame::ReturnName = -12;
}