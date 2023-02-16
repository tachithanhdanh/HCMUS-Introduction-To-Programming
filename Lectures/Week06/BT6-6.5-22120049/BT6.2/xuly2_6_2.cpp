#include "xuly2_6_2.h"

void cong(int& a, int& b, int& c, int& d, int& e, int& f) {
	e = a + c;
	f = b;
	return;
}

void tru(int& a, int& b, int& c, int& d, int& e, int& f) {
	e = a - c;
	f = b;
	return;
}

void nhan(int& a, int& b, int& c, int& d, int& e, int& f) {
	e = a * c;
	f = b * d;
	return;
}

void chia(int& a, int& b, int& c, int& d, int& e, int& f, bool& chia_cho_0) {
	if (c == 0) {
		chia_cho_0 = true;
		return;
	}
	e = a * d;
	f = b * c;
	return;
}