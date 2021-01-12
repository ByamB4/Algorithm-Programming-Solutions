#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n, ans = 0;
  cin >> n;
  string s;
  cin >> s;
  for (int _ = 0; _ < s.length() - 1; _++) {
    if (s[_] == s[_ + 1])
      ans++;
  }
  cout << ans << '\n';
  return 0;
}
