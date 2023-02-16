#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(void) {
	srand((unsigned int)time(0));
	int dem = 0;
	const char *toan_tu = "-+";
	bool is_terminated = false;
	do {
		int i = rand() % 2;
		int a, b, dap_an;
		a = rand() % 97 + 1;
		dap_an = rand() % 97 + 1;
		if (a == dap_an) ++dap_an;
		int temp;
		// trong truong hop dau cong
		if (i) {
			if (a > dap_an) {
				temp = a;
				a = dap_an;
				dap_an = temp;
			}
			b = dap_an - a;
		} else {
			if (a < dap_an) {
				temp = a;
				a = dap_an;
				dap_an = temp;
			}
			b = a - dap_an;
		}
		printf("Hoi %d: %d %c %d = ?\n", ++dem, a, toan_tu[i], b);
		int dap;
		is_terminated = false;
		do {
			printf("Dap: ");
			dap = 0;
			char c = '0';
			bool nhap_sai = false;
			// -1 vi khong tinh dau '\n'
			int so_ky_tu_nhap = -1;
			do {
				dap = dap * 10 + (c - '0');
				c = getchar();
				if ((c < '0' || c > '9') && c != '\n') nhap_sai = true;
				++so_ky_tu_nhap;
			} while (c != '\n');
			if (nhap_sai || !so_ky_tu_nhap) dap = -1;
			if (!dap) {
				is_terminated = true;
				break;
			}
		} while (dap != dap_an);
	} while (!is_terminated);
	return 0;
}