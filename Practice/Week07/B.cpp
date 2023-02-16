#define _USE_MATH_DEFINES
#include <iostream>
#define endl '\n'
using ll = long long;

using namespace std;
const int INF = 1e7 + 100;
const ll MOD = ll(1e9 + 7);

ll f[INF];
ll f1[INF];
ll f2[INF];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);


    f[0] = 1;
    for (int i = 1; i < INF; i++) (f[i] = f[i - 1] * i) %= MOD;

    f1[0] = 1;
    for (int i = 1; i < INF; i++) (f1[i] = f1[i - 1] + f[i]) %= MOD;

    f2[0] = 1;
    for (int i = 1; i < INF; i++) (f2[i] = f2[i - 1] + f1[i]) %= MOD;

    int T; cin >> T;
    while (T--) {
        int n; cin >> n;
        ll res = 0;
        if (n > 2) {
            (res = f[n]) %= MOD;
            res -= f1[n - 1] * 2 + 1;
            res = (res % MOD + MOD) % MOD;
            (res += f2[n - 2] + 2) %= MOD;
        }
        cout << res % MOD << endl;
    }
}