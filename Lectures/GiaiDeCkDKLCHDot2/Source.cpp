#define _CRT_SECURE_NOT_WARNINGS
#include <stdio.h>
#include <string.h>

const int MAX_DAYS[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

struct Date {
	int day, month, year;
};

Date findTomorrow(Date d);
Date findYesterday(Date d);
void printDaysOfTheWeek(Date d);
bool isLeap(Date d);
int get_max_days(Date d);
int dayDiff(Date d1, Date d2);
int compareDates(Date d1, Date d2);
void swap(Date &d1, Date &d2);

bool isLeap(Date d) {
	if (d.year % 400 == 0) {
		return true;
	}
	if (d.year % 4 == 0 && d.year % 100 != 0) {
		return true;
	}
	return false;
}

int get_max_days(Date d) {
	if (d.month == 2) {
		return (isLeap(d) ? 29 : 28);
	}
	return MAX_DAYS[d.month];
}

Date findTomorrow(Date d) {
	Date ans = d;
	ans.day++;
	if (ans.day > get_max_days(ans)) {
		ans.day = 1;
		++ans.month;
		if (ans.month > 12) {
			ans.month = 1;
			++ans.year;
		}
	}
	return ans;
}

Date findYesterday(Date d) {
	Date ans = d;
	--ans.day;
	if (ans.day == 0) {
		--ans.month;
		if (ans.month == 0) {
			ans.month = 12;
			--ans.year;
		}
		ans.day = get_max_days(ans);
	}
	return ans;
}

// returns -1 if d1 < d2
// return 0 if d1 == d2
// return 1 elsewise
int compareDates(Date d1, Date d2) {
	if (d1.year < d2.year) return -1;
	if (d1.year > d2.year) return 1;

	// d1.year == d2.year
	if (d1.month < d2.month) return -1;
	if (d1.month > d2.month) return 1;

	// d1.month == d2.month
	if (d1.day < d2.day) return -1;
	if (d1.day > d2.day) return 1;
	
	// d1 == d2
	return 0;
}

void swap(Date &d1, Date &d2) {
	Date temp = d1;
	d1 = d2;
	d2 = temp;
	return;
}

int dayDiff(Date d1, Date d2) {
	// we have to ensure that d1 <= d2 otherwise we swap
	if (compareDates(d1, d2) == 1) {
		swap(d1, d2);
	}
	int count = 0;
	while (compareDates(d1, d2) != 0) {
		++count;
		d1 = findTomorrow(d1);
	}
	return count;
}

void printDaysOfTheWeek(Date d) {
	Date flag = {1, 1, 2023};
	int days = dayDiff(d, flag);
	if (compareDates(d, flag)) days *= -1;
	while (days < 0) days += 7;
	days %= 7;
	switch (days) {
	case 0:
		printf("Chu nhat");
		break;
	case 1:
		printf("Thu hai");
		break;
	case 2:
		printf("Thu ba");
		break;
	case 3:
		printf("Thu tu");
		break;
	case 4:
		printf("Thu nam");
		break;
	case 5:
		printf("Thu sau");
		break;
	case 6:
		printf("Thu bay");
		break;
	}
	putchar('\n');
	return;
}

int countTriangle(int N) {
	return (N - 1) / 3;
}

int findValue(int A[], int N) {
	while (N > 1) {
		int cur_pos = 0;
		for (int i = 0; i < N; ++i) {
			if (i % 2 == 1) {
				A[cur_pos++] = A[i];
			}
		}
		N = cur_pos;
	}
	return A[0];
}

struct Student {
	char maso[100] = {};
	char ten[200] = {};
	float diemtoan, diemvan;
	float diemcong;
	float dtb;
};

void readData(Student danhsach[], int &N) {
	FILE *fp = fopen("DATA.TXT", "r");
	char buffer[500] = {};
	int len, count, pos[5] = {};
	N = 0;
	while (!feof(fp)) {
		//printf("%d\n", ftell(fp));
		fscanf(fp, "%[^\n]s", buffer);
		fgetc(fp);
		len = (int)strlen(buffer);
		count = 0;
		for (int i = 0; i < len; ++i) {
			if (buffer[i] == '|') {
				pos[count++] = i + 1;
			}
		}
		sscanf(buffer, " %[^|]s", danhsach[N].maso);
		sscanf(buffer + pos[0], " %[^|]s", danhsach[N].ten);
		sscanf(buffer + pos[1], " %f|%f", &danhsach[N].diemtoan, &danhsach[N].diemvan);
		if (count == 4) {
			sscanf(buffer + pos[3], "%f", &danhsach[N].diemcong);
		} else {
			danhsach[N].diemcong = 0.0;
		}
		danhsach[N].dtb = (danhsach[N].diemtoan + danhsach[N].diemvan) / 2 + danhsach[N].diemcong;
		if (danhsach[N].dtb > 10.0F) danhsach[N].dtb = 10.0F;
		++N;
	}
	fclose(fp);
	return;
}

void sort(Student danhsach[], int N) {
	for (int i = 0; i < N; ++i) {
		for (int j = i + 1; j < N; ++j) {
			if (danhsach[i].dtb < danhsach[j].dtb) {
				Student temp = danhsach[i];
				danhsach[i] = danhsach[j];
				danhsach[j] = temp;
			}
		}
	}
	return;
}

void writeData(Student danhsach[], int N) {
	FILE *fp = fopen("OUTPUT.TXT", "w");
	sort(danhsach, N);
	for (int i = 0; i < N; ++i) {
		if (danhsach[i].dtb < 8) break;
		fprintf(fp, "%s|%s|%.2f|%.2f", danhsach[i].maso, danhsach[i].ten, danhsach[i].diemtoan, danhsach[i].diemvan);
		if (danhsach[i].diemcong != 0) {
			fprintf(fp, "|%+.2f", danhsach[i].diemcong);
		}
		fputc('\n', fp);
	}
	fclose(fp);
	return;
}

int main(void) {
	Student danhsach[50];
	int N = 0;
	readData(danhsach, N);
	writeData(danhsach, N);
	return 0;
}
