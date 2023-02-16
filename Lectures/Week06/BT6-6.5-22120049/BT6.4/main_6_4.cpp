#include "nhapxuat_6_4.h"
#include "xuly_6_4.h"
#include "main_6_4.h"

void bai_6_4(void) {
	int so_dien_cu, so_dien_moi;
	nhap_chi_so_dien(so_dien_cu, so_dien_moi);
	int so_dien_su_dung = so_dien_moi - so_dien_cu;
	int tien_dien = 0;
	tinh_tien_dien(tien_dien, so_dien_su_dung);
	xuat_tien_dien(tien_dien);
	return;
}