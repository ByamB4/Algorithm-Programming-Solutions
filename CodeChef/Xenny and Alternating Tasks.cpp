#include <bits/stdc++.h>

using namespace std;

inline void solve() {
  int n, a = 0, b = 0;
  cin >> n;
  for (int i = 0, _; i < n; i++) {
    cin >> _;
    if (i % 2 == 0)
      a += _;
    else b += _;
  }
  for (int i = 0, _; i < n; i++) {
    cin >> _;
    if (i % 2 == 0)
      b += _;
    else a += _;
  }
  cout << min(a, b) << '\n';
}

int main() {
  int T;
  cin >> T;
  while (T--)
    solve();
  return 0;
}
