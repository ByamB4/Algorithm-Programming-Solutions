#include <bits/stdc++.h>

using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    double x, y, xr, yr, D;
    cin >> x >> y >> xr >> yr >> D;

    if (min(x / xr, y / yr) >= D)
      cout << "YES" << '\n';
    else
      cout << "NO" << '\n';
  }
  return 0;
}
