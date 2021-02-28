#include <bits/stdc++.h>

using namespace std;

inline void solve() {
  int n, ans[5] = {0};
  string s;
  cin >> n;
  for (int _ = 0; _ < n; _++) {
    cin >> s;
    ans[s == "cakewalk" ? 0: s == "simple" ? 1: s == "easy" ? 2: s == "easy-medium" || s == "medium" ? 3 : 4] = 1;
  }
  cout << (ans[0] + ans[1] + ans[2] + ans[3] + ans[4] == 5 ? "Yes" : "No") << '\n';
}
int main() {
  int T;
  cin >> T;
  while (T--)
    solve();
  return 0;
}
