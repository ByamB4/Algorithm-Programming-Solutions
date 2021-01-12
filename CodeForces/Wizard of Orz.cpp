#include <bits/stdc++.h>

using namespace std;

inline void solve() {
  int n;
  cin >> n;
  string s = "989";
  if (n <= 3) {
    cout << s.substr(0, n) << '\n';
    return;
  }
  cout << s;
  for (int i = 3; i < n; i++)
    cout << (i - 3) % 10;
  cout << '\n';
}
int main() {
  int T;
  cin >> T;

  while (T--) {
    solve();
  }

  return 0;
}
