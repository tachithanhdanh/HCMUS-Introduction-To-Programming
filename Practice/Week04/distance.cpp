#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

#define all(x) (x).begin(), (x).end()

using ll = long long;
constexpr int INF = static_cast<int>(2E9 + 10);
constexpr int N = static_cast<int>(1E5 + 10);

int arr[N];
int st[N << 2];

void build(int id, int l, int r) {
	if (l == r) {
		st[id] = arr[l];
		return;
	}
	int mid = (l + r) / 2;
	build(id * 2, l, mid);
	build(id * 2 + 1, mid + 1, r);
	st[id] = std::min(st[id * 2], st[id * 2 + 1]);
	return;
}

int get(int id, int l, int r, int u, int v) {
	if (u > r || v < l) {
		return INF;
	}
	if (u <= l && r <= v) {
		return st[id];
	}
	int mid = (l + r) / 2;
	int get1 = get(id * 2, l, mid, u, v);
	int get2 = get(id * 2 + 1, mid + 1, r, u, v);
	return std::min(get1, get2);
}

int main(void) {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int m, n, k;
	std::cin >> m >> n >> k;
	std::vector<int> a(m);
	for (int& aa : a) {
		std::cin >> aa;
	}
	std::vector<int> b(n);
	for (int& bb : b) {
		std::cin >> bb;
	}
	if (k == 1) {
		int l, r;
		std::cin >> l >> r;
		--l, --r;
		std::vector<int> c(r - l + 1);
		for (int i = l; i <= r; ++i) {
			c[i - l] = a[i];
		}
		sort(all(c));
		// chat nhi phan
		int ans = INF;
		for (int& bb : b) {
			if (std::binary_search(all(c), bb)) {
				ans = 0;
				break;
			}
			std::vector<int>::iterator it1 = std::upper_bound(all(c), bb);
			std::vector<int>::iterator it2 = std::lower_bound(all(c), bb);
			if (it1 != c.end()) {
				ans = std::min(ans, *it1 - bb);
			}
			if (it2 != c.begin()) {
				--it2;
				ans = std::min(ans, bb - *it2);
			}
		}
		std::cout << ans << '\n';
	} else {
		std::sort(all(b));
		for (int i = 0; i < m; ++i) {
			int min = INF;
			if (std::binary_search(all(b), a[i])) {
				min = std::min(min, 0);
			}
			std::vector<int>::iterator it1 = std::upper_bound(all(b), a[i]);
			std::vector<int>::iterator it2 = std::lower_bound(all(b), a[i]);
			if (it1 != b.end()) {
				min = std::min(min, *it1 - a[i]);
			}
			if (it2 != b.begin()) {
				--it2;
				min = std::min(min, a[i] - *it2);
			}
			arr[i + 1] = min;
		}
		/*for (int i = 1; i <= m; ++i) {
			std::cout << "[arr[i]] = " << arr[i] << '\n';
		}*/
		build(1, 1, m);
		/*for (int i = 1; i <= m * 4; ++i) {
			std::cout << "[st[" << i << "]] = " << st[i] << '\n';
		}*/
		for (int kk = 0; kk < k; ++kk) {
			int l, r;
			std::cin >> l >> r;
			std::cout << get(1, 1, m, l, r) << '\n';
		}
		/*for (int i = 1; i <= m; ++i) {
			for (int j = i; j <= m; ++j) {
				std::cout << "i = " << i << ", j = " << j << " get = ";
				std::cout << get(1, 1, m, i, j) << std::endl;
			}
		}*/
	}
	return 0;
}