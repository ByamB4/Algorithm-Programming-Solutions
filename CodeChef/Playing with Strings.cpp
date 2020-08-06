#include <bits/stdc++.h>

using namespace std;

inline void solve() {
  int n, a = 0, b = 0;
  cin >> n;
  string s;
  cin >> s;
  for (int _ = 0; _ < s.length(); _++)
    if (s[_] == '1')
      a++;
  cin >> s;
  for (int _ = 0; _ < s.length(); _++)
    if (s[_] == '1')
      b++;
  if (a == b)
    cout << "YES" << '\n';
  else
    cout << "NO" << '\n';
  return;
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--)
    solve();

  return 0;
}
