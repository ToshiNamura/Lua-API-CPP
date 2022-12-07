// Process.h
#pragma once
#ifndef LUA_DEBUG_PROCESS_H
#define LUA_DEBUG_PROCESS_H

#include "main.h"

namespace dbg
{
	class Process
	{
	public:
		using ArgsType = std::vector<std::string>;
		using MainArgsType = std::pair<const int, const char* const* const>;

		Process(const MainArgsType MainArgs, const std::string name = "prog");

		void Run() const;

		const int Result() const;

		const std::string& What() const;

		const std::string& Name() const;

	protected:
		void Push(const std::string msg, const int code = EXIT_FAILURE) const;

	private:
		ArgsType _Argument;
		const std::string _Name;
		mutable int _Returning;
		mutable std::string _WhatMsg;
	};
}

#endif // !LUA_DEBUG_PROCESS_H