#include <bits/stdc++.h>

using namespace std;

inline void solve() {
    int n, k, ans = 0;
    cin >> n >> k;
    for (int _ = 0; _ < n; _++) {
        int tmp;
        cin >> tmp;
        if ((tmp + k) % 7 == 0)
            ans++;
    }
    cout << ans << '\n';
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
