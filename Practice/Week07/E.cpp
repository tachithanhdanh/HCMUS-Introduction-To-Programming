#include <cstdio>
#include <algorithm>

using ld = long double;
using ll = long long;
const ll N = 1E6;

int main(void) {
	long long A, H;
	std::scanf("%lld%lld", &A, &H);
	long long mul = 1;
	while (H * mul < N) mul *= 10;
	H *= mul;
	ld ans = -1;
	for (long long h = 0; h <= H; ++h) {
		if (ld(h) * 6.0L <= ld(H)) {
			ans = std::max(ans, ld(H - h) * ld(h) * (ld(A) / (ld(H) / 6.0L)));
		} else if (ld(H) < ld(h) * 6.0L && ld(h) * 3.0L <= ld(H)) {
			ans = std::max(ans, ld(H - h) * ((ld(h) - ld(H) / 6.0L) * (ld(100 - A) / (ld(H) / 6.0L)) + ld(A)));
		} else {
			ans = std::max(ans, ld(H - h) * 100.0L);
		}
	}
	std::printf("%.8Lf", ans / ld(mul));
	return 0;
}