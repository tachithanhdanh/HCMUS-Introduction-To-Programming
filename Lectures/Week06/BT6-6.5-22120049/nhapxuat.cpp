#include "nhapxuat.h"
#include "xuly.h"

void xuat_menu() {
	for (int i = dau; i <= cuoi; ++i) {
		in_dong(i);
	}
	return;
}

int nhap_lua_chon() {
	int lua_chon;
	do {
		in_dau_cach(so_dau_cach);
		std::printf("%s", "Lua chon cua ban (1 - 5): ");
		std::scanf("%d", &lua_chon);
		// nuot ky tu '\n'
		std::getchar();
	} while (nhap_sai(lua_chon));
	//in_dau_sao(so_dau_sao, true);
	tuong_tac(lua_chon);
	return lua_chon;
}