#include "nhapxuat.h"
#include "xuly.h"
#include "BT6.1/main_6_1.h"
#include "BT6.2/main_6_2.h"
#include "BT6.3/main_6_3.h"
#include "BT6.4/main_6_4.h"
//#include <cstdlib>

int main(void) {
	int lua_chon;
	while (true) {
		xuat_menu();
		lua_chon = nhap_lua_chon();
		if (lua_chon == 1) {
			bai_6_1();
		} else if (lua_chon == 2) {
			bai_6_2();
		} else if (lua_chon == 3) {
			bai_6_3();
		} else if (lua_chon == 4) {
			bai_6_4();
		} else {
			break;
		}
		//system("pause");
		putchar('\n');
		//system("cls");
	}
	return 0;
}