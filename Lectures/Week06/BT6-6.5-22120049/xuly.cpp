#include "xuly.h"
#include "nhapxuat.h"

bool nhap_sai(int lua_chon) {
	if (lua_chon < 1 || lua_chon > 5) {
		in_dau_cach(20);
		std::printf("Lua chon nhap vao khong hop le, vui long nhap lai.\n");
		return true;
	}
	return false;
}