#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


const int N = 2000;

void rearrange(int* a, int n);

int main(void) {
	FILE *fp;
	fp = fopen("data.txt", "r");
	static char inp[N] = {};
	fscanf(fp, "%[^\n]s", inp);
	fseek(fp, 0, SEEK_SET);
	static int a[N] = {}, n = 0;
	while (!feof(fp)) {
		fscanf(fp, "%d", &a[n]);
		++n;
		if (!feof(fp)) fgetc(fp);
	}
	static int cnt[N] = {};
	for (int i = 0; i < n; ++i) {
		++cnt[a[i]];
	}
	for (int i = 0; i < n; ++i) {
		for (int j = i + 1; j < n; ++j) {
			if (a[i] > a[j]) {
				int temp = a[i];
				a[i] = a[j], a[j] = temp;
			}
		}
	}
	fclose(fp);
	int med = a[n / 2];
	fp = fopen("data.txt", "w");
	fprintf(fp, "%s\n%d %d", inp, med, cnt[med]);
	//fprintf(fp, "\n%d %d", med, cnt[med]);
	fclose(fp);
	return 0;
}

void rearrange(int *a, int n) {
	for (int i = 0; i < 2 * n; ++i) {
		for (int j = i + 1; j < 2 * n; ++j) {
			if (a[i] > a[j]) {
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	static int b[N] = {};
	for (int i = 0; i < n; ++i) {
		b[i * 2] = a[i];
		b[i * 2 + 1] = a[n + i];
	}
	for (int i = 0; i < 2 * n; ++i) {
		a[i] = b[i];
	}
	return;
}