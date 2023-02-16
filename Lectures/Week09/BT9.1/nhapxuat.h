#ifndef BT9_BT91_NHATXUAT_H_
#define BT9_BT91_NHAPXUAT_H_
#include "fraction.h"
#include "constants.h"
#include <cstdio>
#include <cstring>

void getFraction(Fraction &frac, int thu_tu);
int getInteger(inp thu_tu);
void printResult(const Fraction &frac, out thu_tu);
void printResult(const Fraction frac[2], out thu_tu);

#endif // !BT9_BT91_NHATXUAT_H_
