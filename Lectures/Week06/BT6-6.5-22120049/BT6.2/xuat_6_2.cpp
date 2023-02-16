#include "xuat_6_2.h"
#include <cstdio>

void xuat_ket_qua(int tu, int mau, bool loi) {
	if (loi) {
		std::puts("Khong the thuc hien phep chia cho 0!");
	} else {
		printf("Ket qua = %d/%d\n", tu, mau);
	}
	return;
}