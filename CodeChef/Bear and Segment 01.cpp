#include <bits/stdc++.h>

using namespace std;

inline void solve() {
  int i = 0;
  string s;
  bool can = false;
  cin >> s;
  while (i < s.length()) {
    if (s[i] == '1' && can == false) {
      can = true;
      while (i < s.length() && s[i] == '1')
        i++;
    }
    else if (s[i] == '1' && can == true) {
      can = false;
      break;
    }
    else
      i++;
  }
  if (can)
    cout << "YES" << '\n';
  else
    cout << "NO" << '\n';
}

int main() {
  int t;
  cin >> t;

  while (t--)
    solve();

  return 0;
}
