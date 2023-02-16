#include "nhapxuat.h"
#include "xuly.h"

void nhap_mang(int a[MAXN][MAXN], int& N) {
	std::printf("Nhap N = ");
	std::scanf("%d", &N);
	for (int i = 1; i <= N; ++i) {
		std::printf("Nhap dong %d: ", i);
		for (int j = 1; j <= N; ++j) {
			std::scanf("%d", &a[i][j]);
		}
	}
}

void xuat_ket_qua(int a[MAXN][MAXN], int& N) {
	int tong_cheo_chinh, tong_cheo_phu;
	tinh_tong(a, N, tong_cheo_chinh, tong_cheo_phu);
	std::printf("Tong cheo chinh = %d.\n", tong_cheo_chinh);
	std::printf("Tong cheo phu = %d.\n", tong_cheo_phu);
	int pos, max_sum_on_row;
	tim_dong_co_tong_lon_nhat(a, N, pos, max_sum_on_row);
	std::printf("Dong co tong lon nhat la dong %d va tong nay bang %d.\n", pos, max_sum_on_row);
	bool la_ma_phuong = ma_phuong(a, N, tong_cheo_chinh, tong_cheo_phu);
	std::printf("Ma tran%s la ma phuong.\n", (la_ma_phuong ? "" : " khong"));
	return;
}