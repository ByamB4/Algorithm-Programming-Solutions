#include <bits/stdc++.h>

using namespace std;

inline void solve() {
  int x, y;
  cin >> x >> y;
  if (x <= y) cout << "0" << '\n';
  else  cout << x - y << '\n';
}
int main() {
  int t;
  cin >> t;
  while (t--)
    solve();
}
