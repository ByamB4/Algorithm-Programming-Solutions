#include <bits/stdc++.h>

using namespace std;

inline void solve() {
  double n, v1, v2, a, b, c;
  cin >> n >> v1 >> v2;
  a = (n * 2) / v2;
  c = sqrt(2);
  b = (c * n) / v1;
  if (a > b)
    cout << "Stairs\n";
  else
    cout << "Elevator\n";
}
int main() {
  int t;
  cin >> t;
  while (t--) 
    solve();
}
