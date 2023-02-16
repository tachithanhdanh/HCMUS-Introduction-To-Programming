#include <cstdio>

using ll = long long;

ll gcd(ll a, ll b) {
	while (b) {
		ll temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

int main(void) {
	ll l, r, a, k;
	std::scanf("%lld%lld%lld%lld", &l, &r, &a, &k);
	//ll A = 205, B = 82;
	//std::printf("%lld\n", gcd(A, B));
	k /= gcd(a, k);
	ll numL = (l - 1 + k) / k;
	ll numR = (r + k) / k;
	std::printf("%lld\n", numR - numL);
	return 0;
}