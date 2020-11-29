#include <bits/stdc++.h>

using namespace std;

inline void solve() {
  int n, k, tmp;
  cin >> n >> k;
  string res = "";
  while (n--) {
    cin >> tmp;
    if (tmp % k == 0) {
      res += "1";
    } else {
      res += "0";
    }
  }
  cout << res << '\n';
}
int main() {
  int t;
  cin >> t;
  while (t--)
    solve();

  return 0;
}