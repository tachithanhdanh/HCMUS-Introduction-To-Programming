#include "nhapxuat.h"
#include "xuly.h"

int main(void) {
	int M, N;
	static int a[MAX][MAX];
	nhap_mang(a, M, N);

	// b la ma tran a sau khi xoay 90 do sang trai
	static int b[MAX][MAX];
	xoay_ma_tran_90_do_trai(a, b, M, N);
	xuat_mang(b, N, M, false);

	// c la ma tran a sau khi xoay 90 do sang phai
	static int c[MAX][MAX];
	xoay_ma_tran_90_do_phai(a, c, M, N);
	xuat_mang(c, N, M, true);
	return 0;
}

/*

5 3 
11 12 13
21 22 23
31 32 33
41 42 43
51 52 53

2 5
1 2 3 4 5
1 2 3 4 5

*/