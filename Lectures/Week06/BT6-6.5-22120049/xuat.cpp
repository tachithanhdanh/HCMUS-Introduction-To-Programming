#include "xuat.h"

/*
https://stackoverflow.com/questions/14678948/how-to-repeat-a-char-using-printf
https://learn.microsoft.com/en-us/cpp/c-runtime-library/format-specification-syntax-printf-and-wprintf-functions?view=msvc-170
*/

void in_dau_cach(int so_luong) {
	std::printf("%*s", so_luong, "");
}

void in_dau_sao(int so_luong, bool xuong_dong) {
	for (int i = 0; i < so_luong; ++i) std::putchar('*');
	if (xuong_dong) std::putchar('\n');
	return;
}

void in_dong(int dong) {
	in_dau_cach(so_dau_cach);
	if (dong == 0 || dong == 6) {
		in_dau_sao(so_dau_sao, true);
	} else {
		in_dau_sao(1, false);
		in_dau_cach(11);
		if (dong == 5) {
			std::printf("%d. Thoat.", dong);
			in_dau_cach(18);
		} else {
			std::printf("%d. %s%d.", dong, "Bai tap 6.", dong);
			in_dau_cach(12);
		}
		in_dau_sao(1, true);
	}
	return;
}

void tuong_tac(int lua_chon) {
	std::putchar('\n');
	//in_dau_cach(so_dau_cach);
	std:: printf("Ban da lua chon so %d.\n", lua_chon);
	//in_dau_cach(so_dau_cach);
	if (lua_chon == 5) {
		std::printf("Thoat khoi chuong trinh!");
	} else {
		std::printf("Chuong trinh thuc hien Bai tap 6.%d.\n", lua_chon);
		std::putchar('\n');
		std::printf("Bai tap 6.%d.\n", lua_chon);
	}
	return;
}