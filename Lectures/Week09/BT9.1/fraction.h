#ifndef BT9_BT91_FRACTION_H_
#define BT9_BT91_FRACTION_H_

struct Fraction {
	int numerator;
	int denominator;
};

Fraction fractionSum(const Fraction &frac1, const Fraction &frac2);
Fraction fractionProduct(const Fraction &frac1, const Fraction &frac2);
Fraction fractionInverse(const Fraction &frac);
void fractionReduction(Fraction &frac);
//void fractionsDenominatorReduction(Fraction &frac1, Fraction &frac2);
void swap(int &a, int &b);
int findGCD(int a, int b);

#endif // !BT9_BT91_FRACTION_H_


