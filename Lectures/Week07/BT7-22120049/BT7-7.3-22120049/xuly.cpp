#include "xuly.h"

bool setmax(int& a, int b) {
	return (a < b ? a = b, true : false);
}

void tinh_tong(int a[MAXN][MAXN], int& N, int& tong_cheo_chinh, int& tong_cheo_phu) {
	tong_cheo_chinh = tong_cheo_phu = 0;
	for (int i = 1; i <= N; ++i) {
		tong_cheo_chinh += a[i][i];
		tong_cheo_phu += a[i][N - i + 1];
	}
	// 2-D prefix sum
	for (int i = 1; i <= N; ++i) {
		for (int j = 1; j <= N; ++j) {
			a[i][j] += a[i - 1][j] + a[i][j - 1] - a[i - 1][j - 1];
		}
	}
	return;
}

void tim_dong_co_tong_lon_nhat(int a[MAXN][MAXN], int& N, int& pos, int& max_sum_on_row) {
	max_sum_on_row = -INF;
	pos = -1;
	for (int i = 1; i <= N; ++i) {
		int sum_on_row = a[i][N] - a[i - 1][N] - a[i][0] + a[i - 1][0];
		//std::printf("%d\n", sum_on_row);
		if (setmax(max_sum_on_row, sum_on_row)) {
			pos = i;
		}
	}
	return;
}

bool ma_phuong(int a[][MAXN], int N, int& tong_cheo_chinh, int& tong_cheo_phu) {
	if (tong_cheo_chinh != tong_cheo_phu) {
		return false;
	}
	int row_sum, col_sum;
	for (int i = 1; i <= N; ++i) {
		row_sum = a[i][N] - a[i - 1][N] - a[i][0] + a[i - 1][0];
		col_sum = a[N][i] - a[N][i - 1] - a[0][i] + a[0][i - 1];
		if (row_sum != tong_cheo_chinh || col_sum != tong_cheo_chinh) {
			return false;
		}
	}
	return true;
}