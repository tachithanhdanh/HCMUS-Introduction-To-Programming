#include <stdio.h>
#include <stdbool.h>

int main(void) {
	int a, b;
	int khong_hop_le = false;
	char c = '0';
	do {
		a = 0;
		b = 0;
		printf("Nhap 2 so nguyen duong a, b = ");
		c = '0';
		khong_hop_le = false;
		do {
			a = a * 10 + (c - '0');
			c = getchar();
			if ((c < '0' || c > '9') && c != ' ') khong_hop_le = true;
		} while (c != ' ');
		c = '0';
		do {
			b = b * 10 + (c - '0');
			c = getchar();
			if ((c < '0' || c > '9') && c != '\n') khong_hop_le = true;
		} while (c != '\n');
		if (khong_hop_le) puts("ban da nhap sai, vui long nhap lai.\n");
	} while (khong_hop_le);

	long long tich = 1LL * a * b;
	// tim UCLN
	while (a != b) {
		if (a > b) {
			a -= b;
		} else {
			b -= a;
		}
	}
	int ucln = a;
	printf("UCLN = %d\n", ucln);
	long long bcnn = tich / ucln;
	printf("BCNN = %lld\n", bcnn);
	return 0;
}