#include <bits/stdc++.h>

using namespace std;
inline void solve() {
  int n, imin = 110, imax = 0, mini = 0, maxi = 0;
  cin >> n;
  for (int _ = 0, tmp; _ < n; _++) {
    cin >> tmp;
    if (tmp < imin) {
      imin = tmp;
      mini = _;
    }
    if (tmp > imax) {
      imax = tmp;
      maxi = _;
    }
  }
  if (mini < maxi)
    cout << imin << " " << imax << '\n';
  else
    cout << imax << " " << imin << '\n';
}
int main() {
  int T;
  cin >> T;
  while (T--)
    solve();
  return 0;
}
