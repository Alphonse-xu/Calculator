#pragma once

#include "CppDll.h"

using namespace System;

#pragma comment(lib, "CppDll.lib")
#pragma managed

namespace CliDll {
	public ref class Arith
	{
	public:
		Arith();
		~Arith();

		long long AddCli(long long a, long long b);
		long long SubCli(long long a, long long b);
		long long MulCli(long long a, long long b);
		long long DivCli(long long a, long long b);
	};
}
