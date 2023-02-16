#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using ll = long long;
using std::vector;

ll fact[22];

int main(void) {
	fact[0] = fact[1] = 1;
	for (int i = 2; i <= 20; ++i) {
		fact[i] = i * fact[i - 1];
	}
	vector<ll> a;
	ll aa;
	while (std::cin >> aa) {
		a.push_back(aa);
	}
	ll y = a.back();
	a.pop_back();
	vector<ll> b(a.size());
	std::iota(b.begin(), b.end(), 1);
	vector<ll> ans;
	ll pos = 0;
	int len = int(a.size());
	if (len <= 10) {
		do {
			++pos;
			//list.push_back(b);
			if (b == a) {
				std::cout << pos << '\n';
			}
			for (int i = 0; i < int(a.size()); ++i) {
				std::cout << b[i] << " \n"[i == int(a.size()) - 1];
			}
			if (pos == y) {
				ans = b;
			}
		} while (std::next_permutation(b.begin(), b.end()));
		for (int i = 0; i < int(a.size()); ++i) {
			std::cout << ans[i] << " \n"[i == int(a.size()) - 1];
		}
	} else {
		//vector<bool> marked(len + 1);
		//int n = len;
		//while (n) {
		//	ll cur = (y + n - 1) / n;
		//	int j = 0;
		//	//std::cout << cur << std::endl;
		//	for (int i = 1; i <= len; ++i) {
		//		if (marked[i] == false) {
		//			++j;
		//			if (j == cur) {
		//				std::cout << i << ' ';
		//				marked[i] = true;
		//				break;
		//			}
		//		}
		//	}
		//	y -= y / n * n;
		//	--n;
		//}
		//std::cout << '\n';
		;
	}
	return 0;
}