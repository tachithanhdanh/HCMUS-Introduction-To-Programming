#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

const int MAX_DAYS[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

struct Date {
	int day, month, year;
};

Date Tomorrow(Date d);
Date Yesterday(Date d);
int Different(Date d1, Date d2);
int max_days(Date d);
bool isLeap(Date d);
int compareDate(Date d1, Date d2);
void swap(Date &d1, Date &d2);
void getDate(Date &d);
void printDate(Date d);
bool isValid(Date d);

int main(void) {
	Date d1, d2;
	getDate(d1);
	getDate(d2);
	printDate(Tomorrow(d1));
	printDate(Yesterday(d2));
	printf("%d\n", Different(d1, d2));
	return 0;
}

bool isValid(Date d) {
	if (d.month < 1 || d.month > 12) return false;
	if (d.day < 1 || d.day > max_days(d)) return false;
	return true;
}

void getDate(Date &d) {
	do {
		printf("Day/Month/Year: ");
		scanf("%d /%d /%d", &d.day, &d.month, &d.year);
	} while (!isValid(d));
	return;
}

void printDate(Date d) {
	printf("%d/%d/%d\n", d.day, d.month, d.year);
	return;
}

bool isLeap(Date d) {
	if (d.year % 400 == 0) {
		return true;
	}
	if (d.year % 4 == 0 && d.year % 100 != 0) {
		return true;
	}
	return false;
}

int max_days(Date d) {
	if (d. month != 2) {
		return MAX_DAYS[d.month];
	} else if (isLeap(d)) {
		return 29;
	} else {
		return 28;
	}
}

Date Tomorrow(Date d) {
	Date ans = d;
	++ans.day;
	if (ans.day > max_days(ans)) {
		ans.day = 1;
		++ans.month;
	}
	if (ans.month > 12) {
		ans.month = 1;
		++ans.year;
	}
	return ans;
}

Date Yesterday(Date d) {
	Date ans = d;
	--ans.day;
	if (ans.day == 0) {
		// lui ve ngay cuoi cua thang truoc
		--ans.month;
		if (ans.month == 0) {
			// lui ve nam truoc
			--ans.year;
			ans.month = 12;
		}
		ans.day = max_days(d);
	}
	return ans;
}

// return -1 if d1 < d2, 1 if d1 > d2, 0 elsewise
int compareDate(Date d1, Date d2) {
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

int Different(Date d1, Date d2) {
	// imagine d1 < d2
	// then we would increase d1 until d1 == d2.
	// if d1 > d2 then we swap them
	if (compareDate(d1, d2) == 1) {
		swap(d1, d2);
	}
	int count = 0;
	// while d1 < d2
	while (compareDate(d1, d2)) {
		d1 = Tomorrow(d1);
		++count;
	}
	return count;
}