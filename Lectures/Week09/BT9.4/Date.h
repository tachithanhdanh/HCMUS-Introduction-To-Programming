#ifndef BT9_BT94_DATE_H_
#define BT9_BT94_DATE_H_

struct Date {
	int day, month, year;
};

Date getPreviousDay(const Date &date);
Date getFollowingDay(const Date &date);

#endif // !BT9_BT94_DATE_H_
