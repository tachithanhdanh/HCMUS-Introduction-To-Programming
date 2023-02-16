#include "xuly1_6_2.h"
#include "xuly2_6_2.h"

void tinh_toan(int& a, int& b, int& c, int& d, int& e, int& f, char phep_tinh, bool& chia_cho_0) {
	if (phep_tinh == '+' || phep_tinh == '-') quy_dong(a, b, c, d);
	switch (phep_tinh) {
	case '+':
		cong(a, b, c, d, e, f);
		break;
	case '-':
		tru(a, b, c, d, e, f);
		break;
	case '*':
		nhan(a, b, c, d, e, f);
		break;
	case '/':
		chia(a, b, c, d, e, f, chia_cho_0);
		break;
	}
	xu_ly_dau(e, f);
	return;
}

void quy_dong(int& a, int& b, int& c, int& d) {
	a *= d;
	c *= b;
	int mau_so = b * d;
	b = d = mau_so;
	return;
}

void xu_ly_dau(int& tu, int& mau) {
	if ((tu < 0 && mau < 0) || (tu * mau <= 0 && mau < 0)) tu = -tu, mau = -mau;
	return;
}

