#include "Constants.h"
#include "Date.h"
#include "IOfuntions.h"
#include "Process.h"

int main(void) {
	Date dates[MAX_N];
	int N;
	getListofDates(dates, N);
	printResult(dates, N, printList);
	printResult(dates, N, previousDay);
	printResult(dates, N, followingDay);
	return 0;
}

/*

appropriate test cases:
Test 1:
10
31/12/9999
31/12/8888
23/3/172
31/1/172
30/12/9999
30/1/172
1/2/172
12/12/172
31/12/9999
1/1/1

Test 2:
3
29/2/2000
15/5/1800
1/3/1600

Test 3:
5
1/6/100
30/5/207
31/5/2020
2/9/1945
30/4/1975

failure test:
Test 1:
1
asdfsdfsdf
asdfsdsdf
sdfsdf

Test 2:
1
29/2/1900
29/2/2022
31/9/2022
-1/2/2022
32/3/2022
32/10/2022
1/-1/2000
1/1/-2

*/