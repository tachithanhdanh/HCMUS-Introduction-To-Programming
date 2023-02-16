#include "nhap_6_1.h"

int nhap_so_nguyen() {
	int N = 0;
	bool khong_hop_le = false;
	do {
		N = 0;
		std::printf("Nhap N = ");
		char c = '0';
		bool nhap_sai = false;
		// -1 vi khong tinh dau '\n'
		int so_ky_tu_nhap = -1;
		do {
			N = N * 10 + (c - '0');
			c = std::getchar();
			if ((c < '0' || c > '9') && c != '\n') nhap_sai = true;
			++so_ky_tu_nhap;
		} while (c != '\n');
		khong_hop_le = nhap_sai || !(so_ky_tu_nhap);
		if (khong_hop_le) std::puts("ban da nhap sai, vui long nhap lai.\n");
	} while (khong_hop_le);
	return N;
}
