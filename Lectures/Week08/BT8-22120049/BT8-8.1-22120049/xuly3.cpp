#include "xuly3.h"

// check if a character represents a digit
bool isdigit(char c) {
	return ('0' <= c && c <= '9');
}

// update1: cap nhat res truoc phan mu E
const char *update1(char *c, const char *s, double *res, int *e) {
	while ((*c = *s++) != '\0' && isdigit(*c)) {
		*res = *res * 10.0 + static_cast<int>(*c - '0');
		if (e != nullptr)
			--(*e);
	}
	return s;
}

// gan dau cua so thuc
int set_sign(const char *c) {
	switch (*c) {
		case '-': return -1;
		case '+':  return 1;
		default: return 0;
	}
}

// cap nhat res theo so sau ky phap E
void update2(double &res, int &e) {
	while (e < 0) {
		res *= 0.1;
		++e;
	}
	while (e > 0) {
		res *= 10.0;
		--e;
	}
	return;
}