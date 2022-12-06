# Lua API C++ [eng]

	This repository was created to simplify the assembly of a Dynamically Connected Library: "Lua.Up.dll ",
	for later use in Visual Studio projects.
	
	The solution is built in "Microsoft Visual Studio 2022".
	Uses a set of Platform Tools: "v143".
	ISO C++20 standard (/std:c++20).
	ISO C17 (2018) standard (/std:c17).
	Stable layout of projects is not guaranteed on other parameters.
	
	The source code used in the projects is stored in the folder: "Lua.Source".
	It can also be found on the website: http://www.lua.org/
	
	"Lua.App" is a Lua Interpreter Project.
	"Lua.Build" is the output directory, this is where projects will compile files (Except "Lua.Debug").
	"Lua.Compiler" is a Javac Compiler project that compiles the Lua language into binary files that the interpreter can run.
	"Lua.Debug" is a Tester's project, just needed for testing.
	"Lua.Source" - Lua Source code.
	"Lua.Up" Is A Dynamically Connected Library Project.