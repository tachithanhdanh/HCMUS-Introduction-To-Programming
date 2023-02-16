#ifndef BT9_BT92_NHAPXUAT_H_
#define BT9_BT92_NHAPXUAT_H_
#include "hocsinh.h"
#include <cstdio>

void nhapDanhsachHocsinh(Hocsinh hs[], int &N);
void nhapHocsinh(Hocsinh &hs, int thu_tu);
void xuatDanhsach(Hocsinh hs[], int N, bool (*checkEligible)(const Hocsinh &));
bool kiemtra(const Hocsinh &hs);

#endif // !BT9_BT92_NHAPXUAT_H_
