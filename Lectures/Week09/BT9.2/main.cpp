#include "hocsinh.h"
#include "nhapxuat.h"

const int MAX_N = 150;

int main(void) {
	Hocsinh hs[MAX_N];
	int N;
	nhapDanhsachHocsinh(hs, N);
	tinhDTB(hs, N);
	sapxepDanhsachHocsinh(hs, N, dtbGiamdan);
	xuatDanhsach(hs, N, kiemtra);
	return 0;
}