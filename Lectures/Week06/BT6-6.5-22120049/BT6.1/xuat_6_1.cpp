#include "xuat_6_1.h"
#include "xuly_6_1.h"

void xuat_cac_so_nguyen_to(int N) {
	int dem = 0;
	for (int i = 2; i <= N; ++i) {
		if (la_so_nguyen_to(i)) {
			std::printf("#%d = %d\n", ++dem, i);
		}
	}
	return;
}

void xuat_so_so_nguyen_to(int N) {
	std::printf("Co tat ca %d so nguyen to.\n", N);
	return;
}