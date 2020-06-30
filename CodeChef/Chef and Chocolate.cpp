#include <bits/stdc++.h>

using namespace std;

inline void solve() {
  int a, b;
  cin >> a >> b;
  if (a * b % 2 == 0)
    cout << "Yes\n";
  else
    cout << "No\n";
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--)
    solve();
}
