#include <bits/stdc++.h>

using namespace std;

inline void solve() {
  int n, x = 0, y = 0; 
  cin >> n;
  string s;
  cin >> s;
  int a = 0, b = 0;
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == 'L' && s[i - 1] != 'L' && s[i - 1] != 'R')
      x--;
    else if (s[i] == 'R' && s[i - 1] != 'L' && s[i - 1] != 'R')
      x++;
    else if (s[i] == 'U' && s[i - 1] != 'U' && s[i - 1] != 'D')
      y++;
    else if (s[i] == 'D' && s[i - 1] != 'U' && s[i - 1] != 'D')
      y--;
  }
  cout << x << ' ' << y << '\n';
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
