#include "xuly.h"

void xoay_ma_tran_90_do_trai(int bang_ban_dau[][MAX], int bang_ket_qua[][MAX], int M, int N) {
	for (int i = 0; i < M; ++i) {
		for (int j = 0; j < N; ++j) {
			bang_ket_qua[N - j - 1][i] = bang_ban_dau[i][j];
		}
	}
	return;
}

void xoay_ma_tran_90_do_phai(int bang_ban_dau[][MAX], int bang_ket_qua[][MAX], int M, int N) {
	for (int i = 0; i < M; ++i) {
		for (int j = 0; j < N; ++j) {
			bang_ket_qua[j][M - i - 1] = bang_ban_dau[i][j];
		}
	}
	return;
}