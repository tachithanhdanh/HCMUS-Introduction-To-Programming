#include "nhapxuat.h"

void nhap_chuoi(char *s) {
	std::printf("Nhap chuoi = ");
	std::scanf("%[^\n]s", s);
	return;
}

void xuat_ket_qua(const char *s) {
	std::printf("\"%s\"\n", s);
	return;
}