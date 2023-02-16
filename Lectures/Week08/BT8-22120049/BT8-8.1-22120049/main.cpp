#include "main.h"

int main(void) {
	xuat_gioi_thieu();
	bool end = false;
	while (!end) {
		int lua_chon = nhap_lua_chon();
		xuat_ket_qua(lua_chon, end);
	}
	return 0;
}