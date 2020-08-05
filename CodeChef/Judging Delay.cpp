#include <bits/stdc++.h>

using namespace std;

inline void solve() {
  int n, ans = 0;
  cin >> n;
  while (n--) {
    int a, b;
    cin >> a >> b;
    if (b - a > 5) ans++;
  }
  cout << ans << '\n';
  return;
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}
