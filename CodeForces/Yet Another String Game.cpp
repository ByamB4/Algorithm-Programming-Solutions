#include <bits/stdc++.h>

using namespace std;

inline void solve() {
  string s;
  cin >> s;
  
  for (int _ = 0; _ < s.length(); _++) {
    if (_ & 1) {
      if (s[_] == 'z')
        s[_] = 'y';
      else
        s[_] = 'z';
    } else {
      if (s[_] = 'a')
        s[_] = 'b';
      else
        s[_] = 'a';
    }
  }
  cout << s << '\n';
}

int main() {
  int T;
  cin >> T;

  while (T--)
    solve();

  return 0;
}