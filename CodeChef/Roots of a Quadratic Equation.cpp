#include <bits/stdc++.h>

using namespace std;

inline void solve() {
  int a, b, c;
  cin >> a >> b >> c;
  
  double x1 = double(-b + (double)sqrt((b * b) - 4 * a * c)) / (2 * a);
  double x2 = double(-b - (double)sqrt((b * b) - 4 * a * c)) / (2 * a);
  
  cout << fixed << setprecision(6) << x1 << '\n';
  cout << fixed << setprecision(6) << x2 << '\n';

  return;
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  solve();
  return 0;
}
