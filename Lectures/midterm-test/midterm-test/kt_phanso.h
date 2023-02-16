#ifndef KT_PHANSO_H_
#define KT_PHANSO_H_
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "kt_hangso.h"

typedef struct {
	int numerator, denominator;
} Fraction;

Fraction parseFraction(const char s[]);

#endif // !KT_PHANSO_H_
