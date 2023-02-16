#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <set>

using ld = long double;
using ll = long long;
const ll N = ll(1E6);
using std::string;
using std::cin;
using std::cout;
using std::vector;
using std::set;
using std::multiset;
#define sz(x) int(x.size())

int main(void) {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int T;
	cin >> T;
	while (T--) {
		string a, b;
		cin >> a >> b;
		a.push_back('X');
		int lenA = sz(a);
		//vector<int> c;
		multiset<int> c;
		bool isFirst = true;
		int cnt = 0;
		for (int i = 0; i < lenA; ++i) {
			if (a[i] == '.') {
				if (isFirst) {
					cnt = 1;
					isFirst = false;
				} else {
					++cnt;
				}
			} else {
				if (cnt) {
					//cnt /= 2;
					//if (cnt) c.push_back(cnt);
					if (cnt > 1) c.insert(cnt);
				}
				if (!isFirst) {
					isFirst = true;
					cnt = 0;
				}
			}
		}
		int lenB = sz(b);
		//for (int &cc : c) cc /= 2;
		//sort(c.begin(), c.end());
		cout << (sz(c) ? 'Y' : 'N');// << std::endl;
		int val;
		for (int i = 0; i < lenB; ++i) {
			//for (int &cc : c) cout << cc << ' ';
			c.erase(0);
			c.erase(1);
			if (c.empty()) {
				cout << 'N';// << std::endl;
				continue;
			}
			if (b[i] == 'M') {
				auto it = std::prev(c.end());
				val = *(it);
				c.erase(it);
				//--val;
				val = std::max(val - 2, 0);
				if (val > 1) c.insert(val);
				//--c.back();
			} else {
				//if (sz(c) > 1) {
					//if (c.back() < c[sz(c) - 2]) {
					//	std::swap(c[sz(c) - 1], c[sz(c) - 2]);
					//}
				//}
				//c.back() = std::max(0, c.back() - 2);
				auto it = std::prev(c.end());
				val = *(it);
				c.erase(it);
				if (val & 1) val = std::max(val - 3, 0);
				else val = std::max(val - 4, 0);
				if (val > 1) c.insert(val);
			}
			//while (!c.empty() && c.back() == 0) c.pop_back();
			cout << (sz(c) ? 'Y' : 'N');// << std::endl;
			//if (sz(c)) cout << *(std::prev(c.end()));
		}
		//for (int &cc : c) {
		//	cout << cc << " ";
		//}
		cout << '\n';
	}
	return 0;
}