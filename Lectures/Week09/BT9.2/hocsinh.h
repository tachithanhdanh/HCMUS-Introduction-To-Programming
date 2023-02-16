#ifndef BT9_BT92_HOCSINH_H_
#define BT9_BT92_HOCSINH_H_
#include <cstring>

struct Hocsinh {
	char hoten[50];
	char ngaysinh[11];
	int gioitinh;
	float diemvan;
	float diemtoan;
	float diemtrungbinh;
};

void tinhDTB(Hocsinh hs[], int N);
void sapxepDanhsachHocsinh(Hocsinh hs[], int N, bool (*comparisonFcn)(const Hocsinh &, const Hocsinh &));
bool dtbGiamdan(const Hocsinh &hs1, const Hocsinh &hs2);
void swap(Hocsinh &hs1, Hocsinh &hs2);

#endif // !BT9_BT92_HOCSINH_H_
