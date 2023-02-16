#include "nhapxuat_6_4.h"
#include "xuly_6_4.h"

void xuat_tien_dien(int tien_dien) {
	std::printf("Tien dien = %d\n", tien_dien);
	return;
}

void nhap_chi_so_dien(int& so_dien_cu, int& so_dien_moi) {
	bool nhap_sai;
	do {
		std::printf("Nhap so dien cu va moi (ngan cach boi dau cach): ");
		std::scanf("%d%d", &so_dien_cu, &so_dien_moi);
		nhap_sai = kiem_tra_nhap_sai(so_dien_cu, so_dien_moi);
		if (nhap_sai) {
			printf("So dien nhap vao khong hop le, vui long nhap lai!\n");
		}
	} while (nhap_sai);
}