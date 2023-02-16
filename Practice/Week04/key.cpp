#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>

constexpr int dx[] = { 1, 0, -1, 0 }, dy[] = { 0, 1, 0, -1 };

bool check(int x, int y, int xx, int yy) {
	bool flag = false;
	for (int i = 0; i < 4; ++i) {
		if (x + dx[i] == xx && y + dy[i] == yy) {
			flag = true;
			break;
		}
	}
	return flag;
}

int main(void) {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int h, w, k;
	std::cin >> h >> w >> k;
	std::vector<std::string> b(h);
	for (std::string& bb : b) {
		std::cin >> bb;
	}
	if (k <= 3) {
		std::vector<std::pair<int, int>> pos;
		for (int i = 0; i < h; ++i) {
			for (int j = 0; j < w; ++j) {
				if (b[i][j] == '#') {
					pos.push_back(std::make_pair(i, j));
				}
			}
		}
		std::sort(pos.begin(), pos.end());
		int sz = static_cast<int>(pos.size());
		int ans = 0, x1, x2, x3, y1, y2, y3;
		bool b1, b2, b3;
		if (k == 1) {
			ans = sz;
		} else if (k == 2) {
			for (int i = 0; i < sz; ++i) {
				for (int j = i + 1; j < sz; ++j) {
					x1 = pos[i].first, y1 = pos[i].second;
					x2 = pos[j].first, y2 = pos[j].second;
					ans += check(x1, y1, x2, y2);
				}
			}
		} else {
			for (int i = 0; i < sz; ++i) {
				for (int j = i + 1; j < sz; ++j) {
					for (int p = j + 1; p < sz; ++p) {
						x1 = pos[i].first, y1 = pos[i].second;
						x2 = pos[j].first, y2 = pos[j].second;
						x3 = pos[p].first, y3 = pos[p].second;
						b1 = check(x1, y1, x2, y2) && check(x1, y1, x3, y3);
						b2 = check(x1, y1, x2, y2) && check(x3, y3, x2, y2);
						b3 = check(x3, y3, x2, y2) && check(x1, y1, x3, y3);
						ans += b1 || b2 || b3;
					}
				}
			}
		}
		std::cout << ans << '\n';
	}
}