#include "xuly1.h"

void xulychinh(int lua_chon, bool &end) {
	switch (lua_chon) {
		case 1: case 2: chucnang12(lua_chon); break;
		case 3: chucnang3(); break;
		case 4: std::puts("Ket thuc chuong trinh!"); end = true; break;
	}
}

void chucnang12(int lua_chon) {
	char s[2][MAX_SIZE];
	int i = 1;
	while (i <= 2) {
		std::printf("Nhap xau s%d: ", i);
		nhap_xau(s[i - 1]);
		++i;
	}
	if (lua_chon == 1) {
		std::printf("Ket qua so sanh giua 2 xau s1 va s2 la %d.\n", strcmp(s[0], s[1]));
	} else {
		std::printf("Xau s1 sau khi noi xau s2 vao cuoi chuoi: %s.\n", strcat(s[0], s[1]));
	}
	return;
}

void chucnang3() {
	char s[MAX_SIZE];
	std::printf("Nhap xau s: ");
	nhap_xau(s);
	std::printf("Ket qua cua ham %s: %lf.\n", ten_ham[3], atof(s));
	return;
}