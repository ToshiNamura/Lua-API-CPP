// main.cpp
#include "main.h"

int main(int argc, const char* argv[])
{
	auto MainProcess = dbg::Process(dbg::Process::MainArgsType(argc, argv));

	MainProcess.Run();

	if (MainProcess.Result() != EXIT_SUCCESS)
		std::cout << '[' << MainProcess.Name() << "] " << MainProcess.What() << std::endl;

	return MainProcess.Result();
}