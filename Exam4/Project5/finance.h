#define _CRT_SECURE_NO_WARNINGS
#if !defined FINANCE_H
#define FINANCE_H

#include <stdio.h>
#include <stdlib.h>

struct value {
    char Date[11];
    double Open, High, Low, Close, AdjClose;
    long long Volume;
};
struct value* read_historical_series(const char* filename, size_t* n);
#endif