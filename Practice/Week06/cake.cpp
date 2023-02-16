#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cmath>

using ll = long long;
using std::vector;
using std::cin;
using std::cout;

const ll INF = ll(1E18);
const int MAXN = int(2E5 + 20);

template<typename T>
bool ckmin(T& a, const T& b) {
	return (b <= a ? a = b, true : false);
}

int main(void) {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int T;
	cin >> T;
	for (int t = 0; t < T; ++t) {
		int n, m;
		cin >> n >> m;
		vector<ll> sum(n + 1);
		vector<vector<int>> adj(n + 1);
		vector<int> w(m);
		vector<int> p(m);
		for (int& ww : w) cin >> ww;
		for (int& pp : p) cin >> pp;
		for (int i = 0; i < m; ++i) {
			adj[p[i]].push_back(w[i]);
			sum[p[i]] += w[i];
		}
		int cnt = 0;
		if (n * m <= 7000) {
			for (int i = 0; i <= n; ++i) {
				ll sum_i = sum[i];
				for (int j = i + 1; j <= n; ++j) {
					ll sum_j = sum[j];
					for (int& w_i : adj[i]) {
						for (int& w_j : adj[j]) {
							ll new_sum_i = sum_i - w_i + w_j;
							ll new_sum_j = sum_j - w_j + w_i;
							ll d1 = std::abs(new_sum_i - new_sum_j);
							ll d2 = std::abs(sum_i - sum_j);
							cnt += d1 < d2;
							if (d1 < d2) {
								cout << w_i << ' ' << w_j << '\n';
							}
						}
					}
				}
			}
		} else {
			;
		}

		cout << cnt << '\n';
	}
	return 0;
}