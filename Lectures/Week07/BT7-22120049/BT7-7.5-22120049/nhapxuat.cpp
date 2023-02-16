#include "nhapxuat.h"

void nhap_mang(int a[MAX][MAX], int& M, int& N) {
	std::printf("Nhap so hang M: ");
	std::scanf("%d", &M);
	std::printf("Nhap so cot N: ");
	std::scanf("%d", &N);
	for (int i = 0; i < M; ++i) {
		std::printf("Nhap dong thu %d: ", i);
		for (int j = 0; j < N; ++j) {
			std::scanf("%d", &a[i][j]);
		}
	}
	return;
}

void xuat_mang(int ma_tran[MAX][MAX], int& N, int& M, bool phai) {
	std::printf("\nMa tran sau khi duoc xoay %s 90 do\n", (phai ? "phai" : "trai"));
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < M; ++j) {
			std::printf("%d%c", ma_tran[i][j], " \n"[j == M - 1]);
		}
	}
	return;
}