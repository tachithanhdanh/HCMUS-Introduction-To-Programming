#include "nhapxuat.h"

int main(void) {
	int M, N;
	static int a[MAXN][MAXN];
	nhap_mang(a, M, N);
	xuat_ket_qua(a, M, N);
	return 0;
}