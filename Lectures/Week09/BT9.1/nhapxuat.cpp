#include "nhapxuat.h"

void getFraction(Fraction &frac, int thu_tu) {
	std::printf("Nhap phan so thu %d.\n", thu_tu);
	frac.numerator = getInteger(tu_so);
	do {
		frac.denominator = getInteger(mau_so);
		if (frac.denominator == 0) {
			std::puts("Mau so phai khac 0!");
		}
	} while (frac.denominator == 0);
	return;
}

int getInteger(inp thu_tu) {
	bool valid = true;
	int num = 0;
	char s[21] = {};
	do {
		valid = true;
		std::printf("Nhap %s: ", input[thu_tu]);
		int t = std::scanf(" %d%20[^\n]s", &num, s);
		if (t != 1) {
			std::puts("Ban da nhap sai, vui long nhap lai!");
			valid = false;
			// flush input manually
			// https://stackoverflow.com/a/7898516
			char c;
			while ((c = getchar()) != '\n' && c != EOF);
		}
	} while (!valid);
	return num;
}

void printResult(const Fraction &frac, out thu_tu) {
	std::printf("%s cua 2 phan so: %d/%d\n", output[thu_tu], frac.numerator, frac.denominator);
	return;
}

void printResult(const Fraction frac[2], out thu_tu) {
	for (int i = 1; i <= 2; ++i) {
		std::printf("Phan so thu %d sau khi duoc %s la: %d/%d\n", i, output[thu_tu], frac[i - 1].numerator, frac[i - 1].denominator);
	}
	return;
}