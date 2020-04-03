// CppDll.cpp : 定义 DLL 的导出函数。
//

#include "pch.h"
#include "framework.h"
#include "CppDll.h"

CCalDll::CCalDll()
{
    std::cout << "init finished/n";
}

long long CCalDll::Add(const long long& varX, const long long& varY) {
    return varX + varY;
}

long long CCalDll::Sub(long long& varX, long long& varY) {
    return varX - varY;
}

long long CCalDll::Mul(long long& varX, long long& varY) {
    return varX * varY;
}

long long CCalDll::Div(long long& varX, long long& varY) {
    return varX / varY;
}
