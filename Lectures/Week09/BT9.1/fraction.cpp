#include "fraction.h"

Fraction fractionSum(const Fraction &frac1, const Fraction &frac2) {
	Fraction result;
	result.numerator = frac1.numerator * frac2.denominator + frac2.numerator * frac1.denominator;
	result.denominator = frac1.denominator * frac2.denominator;
	fractionReduction(result);
	return result;
}

Fraction fractionProduct(const Fraction &frac1, const Fraction &frac2) {
	Fraction result;
	result.numerator = frac1.numerator * frac2.numerator;
	result.denominator = frac1.denominator * frac2.denominator;
	fractionReduction(result);
	return result;
}

Fraction fractionInverse(const Fraction &frac) {
	Fraction inverse = frac;
	swap(inverse.numerator, inverse.denominator);
	fractionReduction(inverse);
	return inverse;
}

void fractionReduction(Fraction &frac) {
	int GCD = findGCD(frac.numerator, frac.denominator);
	frac.numerator /= GCD;
	frac.denominator /= GCD;
	return;
}

//void fractionsDenominatorReduction(Fraction &frac1, Fraction &frac2);

void swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
	return;
}

int findGCD(int a, int b) {
	if (a < b) swap(a, b);
	while (b) {
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}
