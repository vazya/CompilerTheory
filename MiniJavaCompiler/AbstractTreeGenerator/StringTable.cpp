#include "StringTable.h"

namespace AbstractTreeGenerator {
	int CStringTable::insert( const std::string& theString )
	{
		auto iter = stringTable.find( theString );
		// ���� ������ ��� �����������, �� ���������� �� �����
		if( iter != stringTable.end() ) {
			return iter->second;
		}
		// ���� ���, �� ����������� ����� �����
		// ��������� ������������ �����
		int n = stringTable.size();
		// ����� ������ ������������� ������� �����
		stringTable.insert( std::make_pair( theString, n ) );
		v.push_back( theString );
		return n;
	}

	std::string CStringTable::find( const int num )
	{
		if( num < v.size() ) {
			return v[num];
		}
		throw std::logic_error( "Error in std::string CStringTable::find( const int num )! \n " );
	}

	std::wstring CStringTable::wfind( const int num )
	{
		const std::string& value = find( num );
		std::wstring result( value.begin(), value.end() );
		return result;
	}

	bool CStringTable::equals( const std::string& left, const std::string& right )
	{
		int leftNum = insert( left );
		int rightNum = insert( right );
		return (leftNum == rightNum);
	}

}