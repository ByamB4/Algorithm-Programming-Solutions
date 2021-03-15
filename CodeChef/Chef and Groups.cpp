#include <bits/stdc++.h>

using namespace std;
inline void solve() {
  string s;
  int ans = 0;
  cin >> s;
  for (int i = 0; i < s.length(); i++) {
    while (s[i] == s[i + 1])
      i++;
    ans += s[i] == '1';
  }
  cout << ans << '\n';
}
int main() {
  int T;
  cin >> T;
  while (T--)
    solve();
  return 0;
}
