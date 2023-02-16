#ifndef BT9_BT94_PROCESS_H_
#define BT9_BT94_PROCESS_H_
#include "Date.h"

void sortDates(Date dates[], int N, bool (*cmpFcn)(const Date &, const Date &));
bool chronologicalOrder(const Date &date1, const Date &date2);
int getDays(const Date &date);
bool checkValidDate(const Date &date);
bool isLeapYear(int year);

#endif // !BT9_BT94_PROCESS_H_
