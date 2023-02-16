#include "nhapxuat.h"

void nhap_mang(int a[MAXN][MAXN], int& M, int& N) {
	std::printf("Nhap M va N: ");
	std::scanf("%d%d", &M, &N);
	for (int i = 1; i <= M; ++i) {
		std::printf("Nhap dong %d: ", i);
		for (int j = 1; j <= N; ++j) {
			std::scanf("%d", &a[i][j]);
		}
	}
	return;
}

void xuat_ket_qua(int a[MAXN][MAXN], int& M, int& N) {
	// 2-D prefix sum
	for (int i = 1; i <= M; ++i) {
		for (int j = 1; j <= N; ++j) {
			a[i][j] += a[i - 1][j] + a[i][j - 1] - a[i - 1][j - 1];
		}
	}
	// a[i][j] = tong cac phan tu con lai tren dong va cot
	// => tong hang = tong cot
	int row_sum, col_sum;
	bool flag = true;
	for (int i = 1; i <= M; ++i) {
		for (int j = 1; j <= N; ++j) {
			row_sum = a[i][N] - a[i - 1][N] - a[i][0] + a[i - 1][0];
			col_sum = a[M][j] - a[M][j - 1] - a[0][j] + a[0][j - 1];
			if (row_sum == col_sum) {
				std::printf("Phan tu o hang %d cot %d co gia tri bang tong cac phan tu con lai tren dong va cot cua no.\n", i, j);
				flag = false;
			}
		}
	}
	if (flag) {
		std::puts("Khong ton tai phan tu nao trong ma tran co gia tri bang tong cac phan tu con lai tren dong va cot cua no.");
	}
	return;
}