#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	vector<int> a(n);
	for (int& aa : a) {
		cin >> aa;
	}
	ll ans = 0;
	for (int i = 0; i < n; ++i) {
		ll cur = a[i];
		ll MN = a[i];
		for (int j = i - 1; j >= 0; --j) {
			MN = min(MN, 0LL + a[j]);
			cur += MN;
		}
		MN = a[i];
		for (int j = i + 1; j < n; ++j) {
			MN = min(MN, 0LL + a[j]);
			cur += MN;
		}
		//cout << cur << endl;
		ans = max(ans, cur);
	}
	cout << ans << '\n';
}