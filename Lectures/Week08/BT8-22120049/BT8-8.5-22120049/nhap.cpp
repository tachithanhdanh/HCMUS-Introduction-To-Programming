#include "nhap.h"

void nhap_chuoi(char *s) {
	std::printf("Nhap chuoi = ");
	std::scanf("%[^\n]s", s);
	return;
}

void nhap_ky_tu(char& c) {
	std::printf("Nhap ky tu = ");
	std::scanf(" %c", &c);
	return;
}