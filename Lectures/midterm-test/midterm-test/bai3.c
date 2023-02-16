#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
	int numerator, denominator;
} Fraction;

int mystrlen(const char s[]) {
	int size = 0;
	while (s[size] != '\0') {
		++size;
	}
	return size;
}

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
		char num[200], den[200];
		for (int i = 0; i < 200; ++i) {
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

void print(Fraction p) {
	printf("%d/%d\n", p.numerator, p.denominator);
	return;
}

int main(void) {
	char s[] = "555";
	int a = atoi(s);
	printf("%d\n", a);
	print(parseFraction("18/23"));
	print(parseFraction("1823"));
	print(parseFraction("/23"));
	print(parseFraction("/"));
	return 0;
}