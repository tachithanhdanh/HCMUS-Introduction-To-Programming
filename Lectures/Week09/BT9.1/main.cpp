#include "constants.h"
#include "nhapxuat.h"
#include "fraction.h"

int main(void) {
	Fraction frac[2];
	for (int i = 0; i < 2; ++i) {
		getFraction(frac[i], i + 1);
		//printf("%d %d\n", frac[i].numerator, frac[i].denominator);
	}
	printResult(fractionSum(frac[0], frac[1]), tong);
	printResult(fractionProduct(frac[0], frac[1]), tich);
	Fraction inv[2] = { fractionInverse(frac[0]), fractionInverse(frac[1]) };
	printResult(inv, nghich_dao);
	for (int i = 0; i < 2; ++i) fractionReduction(frac[i]);
	printResult(frac, rut_gon);
	return 0;
}