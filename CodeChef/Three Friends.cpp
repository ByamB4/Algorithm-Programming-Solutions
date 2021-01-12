#include <bits/stdc++.h>

using namespace std;

inline void solve() {
  int a, b, c;
  cin >> a >> b >> c;
  int imax = max(max(a, b), c);
  
  if (a + b + c == 2 * imax)
    cout << "yes" << '\n';
  else
    cout << "no" << '\n';
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
