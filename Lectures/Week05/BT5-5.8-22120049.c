#include <stdio.h>
#include <stdbool.h>

int main(void) {
	char s[100];
	bool khong_hop_le;
	int len = 0;
	do {
		printf("Nhap N = ");
		for (int i = 0; i < 100; ++i) s[i] = '\0';
		len = 0;
		khong_hop_le = false;
		char c = '0';
		do {
			c = getchar();
			if (c != '\n') s[len++] = c;
			if ((c < '0' || c > '9') && c != '\n') khong_hop_le = true;
		} while (c != '\n');
		if (khong_hop_le) puts("ban da nhap sai, vui long nhap lai.\n");
	} while (khong_hop_le);

	//printf("%s %d\n", s, len);
	bool giam_dan = true;
	for (int i = len - 1; i > 0; --i) {
		if (s[i] <= s[i - 1]) {
			giam_dan = false;
			break;
		}
	}
	printf("Cac chu so %sgiam dan tu hang don vi.\n", (giam_dan ? "" : "khong "));

	bool doi_xung = true;
	for (int i = 0, j = len - 1; i < j; ++i, --j) {
		if (s[i] != s[j]) {
			doi_xung = false;
			break;
		}
	}
	printf("Cac chu so %sdoi xung.\n", (doi_xung ? "" : "khong "));
	return 0;
}