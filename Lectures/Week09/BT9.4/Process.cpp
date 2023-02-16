#include "Process.h"

void sortDates(Date dates[], int N, bool (*cmpFcn)(const Date &, const Date &)) {
	// insertion sort
	Date key;
	int j;
	for (int i = 1; i < N; ++i) {
		key = dates[i];
		j = i - 1;
		// If it is not sorted
		// Compare key with each date on the left of it until a date is before key date.
		while (cmpFcn(key, dates[j]) && j >= 0) {
			dates[j + 1] = dates[j];
			--j;
		}
		dates[j + 1] = key;
	}
	return;
}

bool chronologicalOrder(const Date &date1, const Date &date2) {
	if (date1.year < date2.year) {
		return true;
	} else if (date1.year == date2.year) {
		if (date1.month < date2.month) {
			return true;
		} else if (date1.month == date2.month) {
			return date1.day < date2.day;
		}
	}
	return false;
}

int getDays(const Date &date) {
	int days = 31;
	if (date.month == 2) {
		days = isLeapYear(date.year) ? 29 : 28;
	} else if ((date.month <= 7 && date.month % 2 == 1)
		|| (date.month >= 8 && date.month % 2 == 0)) {
		days = 31;
	} else {
		days = 30;
	}
	return days;
}

bool checkValidDate(const Date &date) {
	// luu giu gia tri ngay thang khong hop le
	// gia tri 0 the hien ngay/thang da nhap la hop le, gia tri 1 la khong hop le
	bool day_not_valid = false, month_not_valid = false;

	// number of days with respect to the month in date.
	int days = 31;

	if (date.month < 1 || date.month > 12) {
		month_not_valid = true;
	} else {
		days = getDays(date);
	}

	// neu ngay nhap vao nam ngoai so ngay co trong thang luu ngay_khong_hop_le = 1
	if (date.day < 1 || date.day > days) {
		day_not_valid = true;
	}

	// Neu ngay hoac thang nhap vao khong hop le return false
	if (day_not_valid || month_not_valid) {
		return false;
	}
	return true;
}

bool isLeapYear(int year) {
	if (year % 400 == 0) {
		// leap year if perfectly divisible by 400
		return true;
	} else if (year % 100 == 0) {
		// not a leap year if divisible by 100
		// but not divisible by 400
		return false;
	} else {
		// leap year if not divisible by 100
		// but is divisible by 4
		return (year % 4 == 0);
	}
}