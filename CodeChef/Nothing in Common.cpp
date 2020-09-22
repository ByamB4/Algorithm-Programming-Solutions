#include <bits/stdc++.h>

using namespace std;

inline void solve() {
  int n, m, ans = 0;
  cin >> n >> m;
  vector <int> a(n), b(m);

  for (int _ = 0; _ < n; _++)
    cin >> a[_];
  for (int _ = 0; _ < n; _++)
    cin >> b[_];

  for (int i = 0; i < n; i++) {
    bool can = true;
    for (int j = 0; j < m; j++) {
      if (a[i] == b[i]) {
        can = false;
        break;
      }
    }
    if (can)
      ans++;
  }
  cout << ans << '\n';
  a.clear();
  b.clear();
  return;
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int t;
  cin >> t;

  while (t--)
    solve();

  return 0;
}
