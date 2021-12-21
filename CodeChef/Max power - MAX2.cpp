#include <bits/stdc++.h>

using namespace std;

int main() {
  int T, ans = 0;
  cin >> T;
  string s;

  cin >> s;
  for (int _ = s.length() - 1; _ >= 0; _--) {
    if (s[_] == '1')
      break;
    else
      ans++;
  }
  cout << ans << '\n';
  return 0;
}
