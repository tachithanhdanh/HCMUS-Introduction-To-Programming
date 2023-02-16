#include <stdio.h>

#define INF (long long)2E18

int main(void) {
	// dat min la so lon nhat co the
	long long min = INF;
	// dat max la so nho nhat co the (o day dat 0 vi nhap so nguyen duong)
	long long max = 0;
	int bien_dem = 0;
	long long a = -1;
	while (1) {
		printf("So thu %d = ", ++bien_dem);
		scanf("%lld", &a);
		if (a == 0) break;
		max = (a > max ? a : max);
		min = (a < min ? a : min);
	}
	printf("So lon nhat = %lld\n", max);
	printf("So nho nhat = %lld\n", min);
	return 0;
}