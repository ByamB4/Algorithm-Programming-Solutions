#include <bits/stdc++.h>

using namespace std;

inline void solve() {
  int n, p, tot = 0, ans = 0;
  cin >> n >> p;
  for (int _ = 0, tmp; _ < n; _++) {
    cin >> tmp;
    if (tmp > p) ans += p;
    else ans += tmp;
    tot += tmp;
  }
  cout << tot - ans << '\n';
}

int main() {
  int T;
  cin >> T;
  while (T--)
    solve();

  return 0;
}
