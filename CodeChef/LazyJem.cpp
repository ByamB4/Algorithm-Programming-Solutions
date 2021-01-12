#include <bits/stdc++.h>

typedef long long int lli;

using namespace std;

inline void solve() {
  lli a, b, c, ans = 0;
  cin >> a >> b >> c;
  while (a > 0) {
    lli solved;
    if (a % 2 == 0) solved = a / 2;
    else solved = (a + 1) / 2;
    ans += solved * c;
    a -= solved;
    if (a > 0)
      ans += b;
    c *= 2;
  }
  cout << ans << '\n';
}
int main() {
  int t;
  cin >> t;
  while (t--)
    solve();
}
