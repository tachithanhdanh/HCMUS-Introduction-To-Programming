#include <stdio.h>
#include <stdbool.h>

#define SO_NGAY_TRONG_TUAN 7

int main(void) {
	int thang, nam, ngay_dau_thang;
	bool khong_hop_le = false;
	char c = '0';
	do {
		thang = 0;
		nam = 0;
		printf("Muon xem lich thang va nam nao? ");
		c = '0';
		khong_hop_le = false;
		do {
			thang = thang * 10 + (c - '0');
			c = getchar();
			if ((c < '0' || c > '9') && c != ' ') khong_hop_le = true;
			if (thang > 12) khong_hop_le = true;
		} while (c != ' ');
		c = '0';
		do {
			nam = nam * 10 + (c - '0');
			c = getchar();
			if ((c < '0' || c > '9') && c != '\n') khong_hop_le = true;
		} while (c != '\n');
		if (khong_hop_le) puts("ban da nhap sai, vui long nhap lai.");
	} while (khong_hop_le);

	do {
		ngay_dau_thang = 0;
		printf("Ngay dau thang la thu may? ");
		c = '0';
		khong_hop_le = false;
		do {
			ngay_dau_thang = ngay_dau_thang * 10 + (c - '0');
			c = getchar();
			if ((c < '0' || c > '9') && c != '\n') khong_hop_le = true;
		} while (c != '\n');
		if (ngay_dau_thang < 1 || ngay_dau_thang > 7) khong_hop_le = true;
		if (khong_hop_le) puts("ban da nhap sai, vui long nhap lai.");
	} while (khong_hop_le);

	int so_ngay;
	switch(thang) {
	case 2:
		if (nam % 400 == 0 || (nam % 4 == 0 && nam % 100)) {
			so_ngay = 29;
		} else {
			so_ngay = 28;
		}
		break;
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		so_ngay = 31;
		break;
	default:
		so_ngay = 30;
	}

	const char *days[] = { "Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun" };
	for (int i = 0; i < SO_NGAY_TRONG_TUAN; ++i) {
		printf("%3s%c", days[i], " \n"[i + 1 == SO_NGAY_TRONG_TUAN]);
	}

	// Mon 0 Tue 1 Wed 2 Thu 3 Fri 4 Sat 5 Sun 6
	ngay_dau_thang -= 2;
	if (ngay_dau_thang == -1) ngay_dau_thang = 6;
	int thu_dang_in;
	for (thu_dang_in = 0; thu_dang_in < ngay_dau_thang; ++thu_dang_in) {
		printf("   ");
		if (thu_dang_in) putchar(' ');
	}
	for (int i = 1; i <= so_ngay; ++i) {
		if (thu_dang_in) putchar(' ');
		printf("%3d", i);
		++thu_dang_in;
		thu_dang_in %= 7;
		if (!thu_dang_in) putchar('\n');
	}
	return 0;
}