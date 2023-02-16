#include "nhapxuat.h"

void nhap_mang(int a[], int& N) {
	std::printf("Nhap N = ");
	std::scanf("%d", &N);
	for (int i = 0; i < N; ++i) {
		std::printf("Phan tu %d = ", i);
		std::scanf("%d", &a[i]);
	}
}

void xuat_ket_qua(int so_so_am, int so_so_nguyen_to) {
	std::printf("Co %d so am.\nCo %d so nguyen to.\n", so_so_am, so_so_nguyen_to);
}