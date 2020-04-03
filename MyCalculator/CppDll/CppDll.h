#pragma once

#include<iostream>

#ifdef CPPDLL_EXPORTS
#define CPPDLL_API __declspec(dllexport)
#else
#define CPPDLL_API __declspec(dllimport)
#endif

// 此类是从 dll 导出的
class CPPDLL_API CCalDll {
public:
	CCalDll(void);

    static long long Add(const long long& varX, const long long& varY);

    static long long Sub(long long& varX, long long& varY);

    static long long Mul(long long& varX, long long& varY);

    static long long Div(long long& varX, long long& varY);
};
