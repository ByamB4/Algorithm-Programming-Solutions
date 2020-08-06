#include <bits/stdc++.h>

using namespace std;

inline void solve() {
  string s;
  cin >> s;
  int k = 0;
  s[8] = s[0];
  for (int _ = 0; _ < 8; _++) {
    if (s[_] != s[_ + 1])
      k++;
  }
  if (k < 3)
    cout << "uniform" << '\n';
  else
    cout << "non-uniform" << '\n';

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
