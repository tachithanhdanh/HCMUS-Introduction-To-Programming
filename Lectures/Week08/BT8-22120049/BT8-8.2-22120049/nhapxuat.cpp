#include "nhapxuat.h"

void nhap(char *s, int thu_tu) {
	std::memset(s, '\0', sizeof(char) * N);
	std::printf("Nhap %c = ", "ST"[thu_tu]);
	std::scanf(" %[^\n]s", s);
	return;
}

void xuat_ket_qua(char *ket_qua) {
	std::printf("Kiem duyet = %s\n", ket_qua);
	return;
}