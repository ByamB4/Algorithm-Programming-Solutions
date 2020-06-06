#include <bits/stdc++.h>

using namespace std;

inline void solve() {
  int n, d, imax = -1;
  cin >> n >> d;
  while (n--) {
    int a, b, c;
    cin >> a >> b >> c;
    if (c <= d)
      imax = (a * b > imax ? a * b : imax);
  }
  if (imax == -1)
    cout << "no tablet" << '\n';
  else
    cout << imax << '\n';
}
int main() {
  int t;
  cin >> t;
  while (t--) solve();
}
