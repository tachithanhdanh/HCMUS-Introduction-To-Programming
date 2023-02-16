#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct Date {
	int day, month, year;
};

const int MAX_DAYS[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
const int MAXN = 1001;
const int di[] = {-2,-2,-1,+1,+2,+2,+1,-1};
const int dj[] = {-1,+1,+2,+2,+1,-1,-2,-2};
int BANCO[][8] = {
	{21, -1, -1, -1, -1, 19, -1, -1},
	{-1, -1, 16, -1, -1, -1, -1, -1},
	{-1, -1, -1, 05, -1, 22, -1, -1},
	{-1, 18, -1, -1, -1, -1, -1, -1},
	{-1, -1, -1, -1, 31, -1, -1, -1},
	{-1, -1, -1, -1, -1, -1, -1, -1},
	{-1, -1, -1, -1, -1, -1, -1, -1},
	{-1, -1, -1, 29, -1, -1, -1, -1}
};

bool isDateValid(Date d);
int getDay(Date d);
bool isLeap(int year);
bool kiemTraLapGach(int L, int N, int M);
void xoaPhanTuTrung(int A[], int &N);
void taoCuuChuong(char filename[]);
void inViTriAn(int banco[8][8]);
bool kiemTraCoQuanTrongBanCo(int i, int j, int banco[8][8]);

int main(void) {
	char filename[] = "output.txt";
	printf("kiemTraLapGach(8,3,1) => %d\n", int(kiemTraLapGach(8, 3, 1)));
	printf("kiemTraLapGach(9,3,1) => %d\n", int(kiemTraLapGach(9, 3, 1)));
	printf("kiemTraLapGach(10,3,2) => %d\n", int(kiemTraLapGach(10, 3, 2)));
	taoCuuChuong(filename);
	inViTriAn(BANCO);
	return 0;
}

bool kiemTraCoQuanTrongBanCo(int i, int j, int banco[8][8]) {
	return i >= 0 && i < 8 && j >= 0 && j < 8 && banco[i][j] >= 16 && banco[i][j] <= 31;
}

void inViTriAn(int banco[8][8]) {
	int hang, cot;
	for (int i = 0; i < 8; ++i) {
		for (int j = 0; j < 8; ++j) {
			if (banco[i][j] >= 0 && banco[i][j] <= 15) {
				hang = i, cot = j;
			}
		}
	}
	for (int k = 0; k < 8; ++k) {
		int hang_moi = hang + di[k], cot_moi = cot + dj[k];
		if (kiemTraCoQuanTrongBanCo(hang_moi, cot_moi, banco)) {
			printf("dong %d cot %d: an quan %d\n", hang_moi, cot_moi, banco[hang_moi][cot_moi]);
		}
	}
	return;
}

bool isLeap(int year) {
	if (year % 400 == 0) {
		return true;
	}
	if (year % 4 == 0 && year % 100 != 0) {
		return true;
	}
	return false;
}

int getDay(Date d) {
	if (d.month != 2) {
		return MAX_DAYS[d.month];
	}
	if (isLeap(d.year)) {
		return 29;
	}
	return 28;
}

bool isDateValid(Date d) {
	if (d.month < 1 || d.month > 12) return false;
	if (d.day < 1 || d.day > getDay(d)) return false;
	return true;
}

bool kiemTraLapGach(int L, int N, int M) {
	for (int i = 0; i <= N; ++i) {
		for (int j = 0; j <= M; ++j) {
			if (i + 5 * j == L) {
				return true;
			}
		}
	}
	return false;
}

void xoaPhanTuTrung(int A[], int &N) {
	static bool check[MAXN] = {};
	for (int i = 0; i < N; ++i) {
		if (check[A[i]]) {
			for (int j = i + 1; j < N; ++j) {
				A[j - 1] = A[j];
			}
			--N;
		} else {
			check[A[i]] = true;
		}
	}
	return;
}

void taoCuuChuong(char filename[]) {
	FILE *fp = fopen(filename, "w");
	for (int i = 0; i < 2; ++i) {
		for (int j = 1; j < 10; ++j) {
			for (int k = 2; k < 6; ++k) {
				int thua_so = k + i * 4;
				int tich = thua_so * j;
				fprintf(fp, "%d x %d =%3d", thua_so, j, tich);
				if (k == 5) fprintf(fp, "\n");
				else fprintf(fp, "   ");
			}
		}
		fprintf(fp, "\n");
	}
	return;
}