#include "nhapxuat.h"

int main(void) {
	int N;
	static int a[MAXN][MAXN];
	nhap_mang(a, N);
	xuat_ket_qua(a, N);
	return 0;
}