#include <bits/stdc++.h>

using namespace std;

inline void solve() {
  string s;
  cin >> s;
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == '>')
      s[i] = '<';
    else if (s[i] == '<')
      s[i] = '>';
  }
  int ans = 0;
  for (int i = 0; i < s.length() - 1; i++) {
    if (s[i] == '>' && s[i + 1] == '<')
      ans++;
  }
  cout << ans << '\n';
}
int main() {
  int t;
  cin >> t;
  while (t--)
    solve();
}
