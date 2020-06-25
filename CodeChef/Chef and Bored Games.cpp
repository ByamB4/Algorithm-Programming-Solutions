#include <bits/stdc++.h>

using namespace std;

inline void solve() {
  int n, ans = 0;
  cin >> n;
  for (int _ = 0; _ < n; _ += 2)
    ans += (n - _) * (n - _);
  cout << ans << '\n';
}
int main() {
  int t;
  cin >> t;
  while (t--)
    solve();
}
