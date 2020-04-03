#include "pch.h"

#include "CliDll.h"

namespace CliDll {
    Arith::Arith(){}

    Arith::~Arith() {}

    long long Arith::AddCli(long long a, long long b) {
        return CCalDll::Add(a,b);
    }

    long long Arith::SubCli(long long a, long long b) {
        return CCalDll::Sub(a, b);
    }

    long long Arith::MulCli(long long a, long long b) {
        return CCalDll::Mul(a, b);
    }

    long long Arith::DivCli(long long a, long long b) {
        return CCalDll::Div(a, b);
    }
}