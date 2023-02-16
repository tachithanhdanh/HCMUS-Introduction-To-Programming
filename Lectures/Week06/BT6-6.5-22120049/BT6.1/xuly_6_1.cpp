#include "xuly_6_1.h"
#include <stdbool.h>

bool la_so_nguyen_to(int so) {
	if (so == 0 || so == 1) return false;
	bool la_so_nguyen_to = true;
	for (int i = 2; i * i <= so; ++i) {
		if (so % i == 0) {
			la_so_nguyen_to = false;
			break;
		}
	}
	return la_so_nguyen_to;
}

int dem_so_nguyen_to(int N) {
	int dem = 0;
	for (int i = 2; i <= N; ++i) {
		if (la_so_nguyen_to(i)) ++dem;
	}
	return dem;
}