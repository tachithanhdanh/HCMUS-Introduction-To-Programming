#include "nhap.h"

int nhap_lua_chon() {
	bool nhap_sai;
	int lua_chon;
	do {
		xuat_cac_lua_chon();
		char du_lieu_nhap[MAX_SIZE] = {};
		nhap_xau(du_lieu_nhap);
		nhap_sai = strlen(du_lieu_nhap) != 1;
		if (nhap_sai) {
			bao_loi();
		} else {
			lua_chon = du_lieu_nhap[0] - '0';
			switch (lua_chon) {
				case 1: case 2: case 3: case 4: break;
				default: nhap_sai = true; bao_loi();
			}
		}
	} while (nhap_sai);
	return lua_chon;
}

void nhap_xau(char *s) {
	std::scanf(" %[^\n]", s);
	return;
}