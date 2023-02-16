#include "xuly.h"

constexpr int MAXNUM = static_cast<int>(1E5 + 10);
bool isPrime[MAXNUM + 1];

void sang_nguyen_to() {
	for (int i = 0; i <= MAXNUM; ++i) {
		isPrime[i] = true;
	}
	isPrime[0] = isPrime[1] = false;
	for (int i = 4; i <= MAXNUM; i += 2) {
		isPrime[i] = false;
	}
	for (int i = 3; i * i <= MAXNUM; i += 2) {
		if (isPrime[i]) {
			for (int j = i * i; j <= MAXNUM; j += i) {
				isPrime[j] = false;
			}
		}
	}
	return;
}

void dem(int a[], int N, int& so_so_am, int& so_so_nguyen_to) {
	for (int i = 0; i < N; ++i) {
		if (a[i] < 0) {
			++so_so_am;
			continue;
		}
		so_so_nguyen_to += isPrime[a[i]];
	}
	return;
}