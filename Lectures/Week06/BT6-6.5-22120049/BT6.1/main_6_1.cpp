#include "nhap_6_1.h"
#include "xuat_6_1.h"
#include "xuly_6_1.h"
#include "main_6_1.h"

void bai_6_1(void) {
	int N = nhap_so_nguyen();
	int so_so_nguyen_to = dem_so_nguyen_to(N);
	xuat_cac_so_nguyen_to(N);
	xuat_so_so_nguyen_to(so_so_nguyen_to);
	return;
}