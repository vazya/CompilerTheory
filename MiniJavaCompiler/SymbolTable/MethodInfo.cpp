#include "MethodInfo.h"

namespace SymbolTable {

	int CMethodInfo::GetReturnType() const
	{
		return returnType;
	}

	void CMethodInfo::SetReturnType( const int id )
	{
		returnType = id;
	}

	const CVariableInfo & CMethodInfo::GetVarInfo( const int id ) const
	{
		auto info = vars.find( id );
		if( info == vars.end() )
			throw new std::logic_error( "Variable not found" );
		else
			return info->second;
	}

	void CMethodInfo::AddVariableInfo( const int id, const CVariableInfo & info )
	{
		varsCount++;
		vars[id] = info;
	}

	const CVariableInfo & CMethodInfo::GetArgInfo( const int id ) const
	{
		auto info = args.find( id );
		if( info == args.end() )
			throw new std::logic_error( "Args not found" );
		else
			return info->second;
	}

	void CMethodInfo::AddArgInfo( const int id, const CVariableInfo & info )
	{
		argsCount++;
		args[id] = info;
	}

	int CMethodInfo::GetUniqueArgsCount()
	{
		return args.size();
	}

	int CMethodInfo::GetUniqueVarsCount()
	{
		return varsCount;
	}
	int CMethodInfo::GetAllArgsCount()
	{
		return argsCount;
	}
	int CMethodInfo::GetAllVarsCount()
	{
		return vars.size();
	}
}