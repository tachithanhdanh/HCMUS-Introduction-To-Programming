#include <stdio.h>
#include <stdbool.h>

int main(void) {
	int N = 0;
	bool khong_hop_le = false;
	do {
		N = 0;
		printf("Nhap N = ");
		char c = '0';
		khong_hop_le = false;
		do {
			N = N * 10 + (c - '0');
			c = getchar();
			if ((c < '0' || c > '9') && c != '\n') khong_hop_le = true;
		} while (c != '\n');
		if (khong_hop_le) puts("ban da nhap sai, vui long nhap lai.\n");
	} while (khong_hop_le);
	int dem = 0;
	for (int i = 2; i <= N; ++i) {
		bool la_so_nguyen_to = true;
		for (int j = 2; j * j <= i; ++j) {
			if (i % j == 0) {
				la_so_nguyen_to = false;
				break;
			}
		}
		if (la_so_nguyen_to) {
			printf("#%d = %d\n", ++dem, i);
		}
	}
	printf("Co tat %d so nguyen to.\n", dem);
	return 0;
}