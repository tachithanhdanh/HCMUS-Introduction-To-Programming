#ifndef BT9_BT94_IOFUNCTIONS_H_
#define BT9_BT94_IOFUNCTIONS_H_
#include "Date.h"
#include "Constants.h"

void getListofDates(Date dates[], int &N);
void printResult(Date *dates, int N, QuestionName name);
void printListofDates(Date dates[], int N);
void printDate(const Date &date);

#endif // !BT9_BT94_IOFUNCTIONS_H_
