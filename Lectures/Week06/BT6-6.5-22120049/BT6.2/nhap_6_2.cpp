#include "nhap_6_2.h"
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

void nhap_phan_so(int thu_tu, int& tu_so, int& mau_so) {
	bool nhap_sai = false;
	do {
		std::printf("Phan so %d (%s) = ", thu_tu, (thu_tu == 1 ? "a/b" : "c/d"));
		nhap_so_nguyen(tu_so);
		nhap_so_nguyen(mau_so);
		nhap_sai = mau_so == 0;
		if (nhap_sai) std::puts("mau so khong duoc bang 0, vui long nhap lai.");
	} while (nhap_sai);
	return;
}

void nhap_so_nguyen(int& so) {
	std::scanf("%d", &so);
	return;
}

void nhap_phep_tinh(char& phep_tinh) {
	bool khong_hop_le = false;
	do {
		printf("Phep tinh (+, -, *, /) = ");
		std::scanf(" %c", &phep_tinh);
		switch (phep_tinh) {
		case '+': case '-': case '*': case'/':
			break;
		default:
			khong_hop_le = true;
			std::puts("phep tinh khong hop le, vui long nhap lai.");
		}
	} while (khong_hop_le);
	return;
}