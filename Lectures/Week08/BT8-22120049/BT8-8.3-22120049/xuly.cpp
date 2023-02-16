#include "xuly.h"

int cnt[MAXCHAR];
int pos[N][MAXCHAR];
int size[N];

void xuly(char *s) {
	// cnt[i]: so lan xuat hien cua ky tu co ma ASCII la i.
	// pos[i][j]: luu giu ky tu thu j co tan suat la i.
	// size[i]: so phan tu hien co trong hang thu i cua mang pos.
	int len = int(std::strlen(s));
	for (int i = 0; i < len; ++i) {
		if (!isspace(s[i])) ++cnt[s[i]];
	}
	for (int i = 0; i < 256; ++i) {
		if (cnt[i]) {
			pos[cnt[i]][size[cnt[i]]++] = i;
		}
	}
}