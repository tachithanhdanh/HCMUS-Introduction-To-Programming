#include "xuat.h"

void xuat_gioi_thieu() {
	std::puts("Bai 8.1: Chuong trinh gia lap cac ham trong thu vien <string.h>.");
	std::puts("Chuong trinh nay gia lap 3 ham trong thu vien <string.h>.");
	for (int i = 1; i < so_lua_chon; ++i) {
		std::printf("%s: %s\n", ten_ham[i], mo_ta[i]);
	}
	std::putchar('\n');
	std::printf("Chuong trinh ho tro %d lua chon:\n", so_lua_chon);
	for (int i = 1; i <= so_lua_chon; ++i) {
		std::printf("%d la ham %s%c\n", i, ten_ham[i], ";."[i == so_lua_chon]);
	}
	return;
}

void xuat_cac_lua_chon() {
	std::putchar('\n');
	std::printf("Hay nhap chuc nang ban muon su dung (1, 2, 3 hoac 4): ");
	return;
}

void bao_loi() {
	std::puts("Du lieu nhap vao khong hop le, vui long nhap lai!");
	return;
}

void xuat_ket_qua(int lua_chon, bool &end) {
	std::printf("Ban da nhap lua chon thu %d tuong ung voi chuc nang %s.\n", lua_chon, ten_ham[lua_chon]);
	xulychinh(lua_chon, end);
	return;
}