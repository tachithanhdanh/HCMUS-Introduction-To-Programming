#include "IOfuntions.h"
#include "Process.h"
#include <cstdio>

void getListofDates(Date dates[], int &N) {
	std::printf("Nhap so ngay N = ");
	std::scanf("%d", &N);
	std::fgetc(stdin); // clear newline character
	char buffer[20] = {};
	for (int i = 0; i < N; ++i) {
		ErrorCode code = noError;
		do {
			std::printf("Nhap ngay thu %d trong danh sach (dinh dang dd/mm/yyyy hoac dd-mm-yyyy): ", i + 1);
			std::fgets(buffer, sizeof(buffer) / sizeof(char), stdin);
			code = noError;
			if ((std::sscanf(buffer, "%d /%d /%d", &dates[i].day, &dates[i].month, &dates[i].year) == 3)
				|| (std::sscanf(buffer, "%d -%d -%d", &dates[i].day, &dates[i].month, &dates[i].year) == 3)) {
				if (checkValidDate(dates[i]) == false) code = date_not_valid;
			} else {
				code = improper_form;
			}
			std::printf("%s", error_message[code]);
		} while(code != noError);
	}
	return;
}

void printResult(Date *dates, int N, QuestionName name) {
	std::printf("%s", output[name]);
	switch (name) {
		case printList: 
			printListofDates(dates, N); break;
		case followingDay: 
			printDate(getFollowingDay(dates[N - 1])); break;
		case previousDay: 
			printDate(getPreviousDay(dates[0])); break;
	}
}

void printListofDates(Date dates[], int N) {
	sortDates(dates, N, chronologicalOrder);
	for (int i = 0; i < N; ++i) {
		std::printf("%d. ", i + 1);
		printDate(dates[i]);
	}
	return;
}

void printDate(const Date &date) {
	std::printf("%02d/%02d/%04d\n", date.day, date.month, date.year);
	return;
}
