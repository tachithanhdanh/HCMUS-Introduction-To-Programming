#include "Date.h"
#include "Process.h"

Date getPreviousDay(const Date &date) {
	Date previousDate = { date.day - 1 , date.month, date.year };
	if (date.day == 1) {
		--previousDate.month;
		// trong truong hop la ngay cua nam truoc
		if (previousDate.month == 0) {
			previousDate.day = 31;
			previousDate.month = 12;
			--previousDate.year;
		} else if (previousDate.month == 2) {
			previousDate.day = isLeapYear(date.year) ? 29 : 28;
		} else if ((previousDate.month <= 7 && previousDate.month % 2 == 1)
			|| (previousDate.month >= 8 && previousDate.month % 2 == 0)) {
			previousDate.day = 31;
		} else {
			previousDate.day = 30;
		}
	}
	return previousDate;
}

Date getFollowingDay(const Date &date) {
	Date followingDate = { date.day + 1, date.month, date.year };
	// neu ngay da nhap la ngay cuoi thang
	if (date.day == getDays(date)) {
		followingDate.day = 1;
		++followingDate.month;
		// trong truong hop qua nam moi
		if (followingDate.month > 12) {
			followingDate.month = 1;
			++followingDate.year;
		}
	}
	return followingDate;
}