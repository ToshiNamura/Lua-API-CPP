// Process.cpp
#include "Process.h"

dbg::Process::Process(const MainArgsType MainArgs, const std::string name)
	: _Argument(MainArgs.first),
	_Returning(EXIT_SUCCESS),
	_WhatMsg(),
	_Name(name)
{
	for (size_t i = 0; i < size_t(MainArgs.first); i++)
	{
		this->_Argument[i] = MainArgs.second[i];
	}
}

const int dbg::Process::Result() const
{
	return this->_Returning;
}

const std::string& dbg::Process::What() const
{
	return this->_WhatMsg;
}

const std::string& dbg::Process::Name() const
{
	return this->_Name;
}

void dbg::Process::Push(const std::string msg, const int code) const
{
	this->_WhatMsg = msg;
	this->_Returning = code;
}

void dbg::Process::Run() const
{
	lua_State* L = luaL_newstate();



	lua_close(L);
}