#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cmath>

using ll = long long;
using std::vector;

const ll INF = ll(1E18);

template<typename T>
bool ckmin(T& a, const T& b) {
	return (b < a ? a = b, true : false);
}

int main(void) {
	//std::freopen("ASUMMIN.INP", "r", stdin);
	//std::freopen("ASUMMIN.OUT", "w", stdout);
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int n, m;
	std::cin >> n >> m;
	vector<ll> a(n), b(m);
	for (ll& aa : a) std::cin >> aa;
	for (ll& bb : b) std::cin >> bb;
	ll MN = INF;
	//if (m * n <= int(1E8)) {
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			ckmin(MN, std::abs(a[i] + b[j]));
		}
	}
	std::cout << MN;
	//}

	return 0;
}