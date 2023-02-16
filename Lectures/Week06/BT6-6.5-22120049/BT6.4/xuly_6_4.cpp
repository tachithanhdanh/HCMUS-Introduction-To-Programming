#include "xuly_6_4.h"

const int don_gia_bac_1 = 1549;
const int don_gia_bac_2 = 1600;
const int don_gia_bac_3 = 1858;
const int don_gia_bac_4 = 2340;
const int don_gia_bac_5 = 2615;
const int don_gia_bac_6 = 2701;
const int dien_bac_1 = 0;
const int dien_bac_2 = 100;
const int dien_bac_3 = 150;
const int dien_bac_4 = 200;
const int dien_bac_5 = 300;
const int dien_bac_6 = 400;

void cap_nhat_so_tien(int& tien_dien, int& so_dien, int dien_bac, int don_gia_bac) {
	if (so_dien > dien_bac) {
		tien_dien += (so_dien - dien_bac) * don_gia_bac;
		so_dien = dien_bac;
	}
	return;
}

void tinh_tien_dien(int& tien_dien, int& so_dien_su_dung) {
	// bac 6
	cap_nhat_so_tien(tien_dien, so_dien_su_dung, dien_bac_6, don_gia_bac_6);
	// bac 5
	cap_nhat_so_tien(tien_dien, so_dien_su_dung, dien_bac_5, don_gia_bac_5);
	// bac 4
	cap_nhat_so_tien(tien_dien, so_dien_su_dung, dien_bac_4, don_gia_bac_4);
	// bac 3
	cap_nhat_so_tien(tien_dien, so_dien_su_dung, dien_bac_3, don_gia_bac_3);
	// bac 2
	cap_nhat_so_tien(tien_dien, so_dien_su_dung, dien_bac_2, don_gia_bac_2);
	// bac 1
	cap_nhat_so_tien(tien_dien, so_dien_su_dung, dien_bac_1, don_gia_bac_1);
	return;
}

bool kiem_tra_nhap_sai(int a, int b) {
	return (a < 0 || b < 0 || a > b);
}