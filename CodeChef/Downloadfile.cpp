#include <bits/stdc++.h>

using namespace std;

inline void solve() {
    int n, k, ans = 0;
    cin >> n >> k;
    int arr[n][2];
    for (int _ = 0; _ < n; _++) {
        for (int i = 0; i < 2; i++) {
            cin >> arr[_][i];
        }
        if (k != 0) {
            if (k > arr[_][0]) {
                k -= arr[_][0];
                arr[_][0] = 0;
            } else {
                arr[_][0] -= k;
                k = 0;
            }
        }
    }
    for (int _ = 0; _ < n; _++) {
        if (arr[_][0] != 0) {
            ans += arr[_][0] * arr[_][1];
        }
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
