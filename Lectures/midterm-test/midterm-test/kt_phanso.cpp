#include "kt_phanso.h"
#include "kt_xuly.h"

Fraction parseFraction(const char s[]) {
	int pos = -1;
	int len = mystrlen(s);
	Fraction ans = { 1, 1 };
	for (int i = 0; i < len; ++i) {
		if (s[i] == '/') {
			pos = i;
			break;
		}
	}
	// case "numerator"
	if (pos == -1) {
		ans.numerator = atoi(s);
		ans.denominator = 1;
	} else if (pos == 0) {
		// case "/" -> 1/1
		if (len == 1) {
			ans.numerator = 1;
			ans.denominator = 1;
		} else {
			// case "/denominator"	
			ans.numerator = 1;
			ans.denominator = atoi(s + 1);
		}
	} else {
		// TH tong quat
		char num[N], den[N];
		for (int i = 0; i < N; ++i) {
			num[i] = '\0';
			den[i] = '\0';
		}
		strncpy(num, s, pos);
		strcpy(den, s + pos + 1);
		ans.numerator = atoi(num);
		ans.denominator = atoi(den);
	}
	return ans;
}



