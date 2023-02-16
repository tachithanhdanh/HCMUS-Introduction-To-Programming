#include <stdio.h>

int main(void) {
	long long N;
	int M;
	printf("Nhap N, M = ");
	scanf("%lld%d", &N, &M);
	char bit[65];
	for (int i = 0; i < 65; ++i) bit[i] = '\0';
	int len = 0;
	long long NN = N;
	while (NN && len < M) {
		bit[len++] = (NN & 1) + '0';
		NN >>= 1;
	}
	while (len < M) {
		bit[len++] = '0';
	}
	for (int i = 0, j = len - 1; i < j; ++i, --j) {
		char temp = bit[i];
		bit[i] = bit[j];
		bit[j] = temp;
	}
	printf("%d bit dau tien cua %lld: %s", M, N, bit);

}