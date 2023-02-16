#ifndef BT7_BT73_XULY_H_
#define BT7_BT73_XULY_H_
#include "constant.h"

bool setmax(int& a, int b);
void tinh_tong(int a[MAXN][MAXN], int& N, int& tong_cheo_chinh, int& tong_cheo_phu);
void tim_dong_co_tong_lon_nhat(int a[MAXN][MAXN], int& N, int& pos, int& max_sum_on_row);
bool ma_phuong(int a[][MAXN], int N, int& tong_cheo_chinh, int& tong_cheo_phu);

#endif // !BT7_BT73_XULY_H_

