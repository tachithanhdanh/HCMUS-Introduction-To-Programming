#include "hocsinh.h"

void tinhDTB(Hocsinh hs[], int N) {
	for (int i = 0; i < N; ++i) {
		hs[i].diemtrungbinh = (hs[i].diemtoan + hs[i].diemvan) / 2;
	}
	return;
}

void sapxepDanhsachHocsinh(Hocsinh hs[], int N, bool (*comparisonFcn)(const Hocsinh &, const Hocsinh &)) {
	// bubble sort
	for (int i = 0; i < N; ++i) {
		for (int j = i + 1; j < N; ++j) {
			// If it is not sorted then swap the elements
			if (!comparisonFcn(hs[i], hs[j])) {
				swap(hs[i], hs[j]);
			}
		}
	}
	return;
}

bool dtbGiamdan(const Hocsinh &hs1, const Hocsinh &hs2) {
	if (hs1.diemtrungbinh > hs2.diemtrungbinh) return true;
	if (hs1.diemtrungbinh == hs2.diemtrungbinh) {
		int name_cmp = std::strcmp(hs1.hoten, hs2.hoten);
		// if hs1.hoten < hs2.hoten
		if (name_cmp < 0) {
			return true;
		} else if (name_cmp == 0) {
			return std::strcmp(hs1.ngaysinh, hs2.ngaysinh);
		}
	}
	return false;
}

void swap(Hocsinh &hs1, Hocsinh &hs2) {
	Hocsinh hs_temp = hs1;
	hs1 = hs2;
	hs2 = hs_temp;
	return;
}

/*

test
6
d
01/01/2020
1
10
10
b
01/01/2020 
1
10
10
c
01/01/2020
1
8
8  
a
05/01/2020
0
8
8
e
02/02/2019
0
8
8
f
02/02/2020
0
8
7

*/