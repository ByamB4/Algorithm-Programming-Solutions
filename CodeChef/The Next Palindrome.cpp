#include <bits/stdc++.h>

using namespace std;

string s;

inline void inc (int pos) {
  s[pos]++;
  if (s[pos] == ':') {
    s[pos] = '0';
    if (pos > 0)
      inc(pos - 1);
    else
      s.insert(s.begin(), '1');
  }
}
inline void solve () {
  cin >> s;
  int n = s.length();
  inc(n - 1);
  n = s.length();
  for (int i = 0; i < n / 2; i++) {
    int left = i, right = n - 1 - i;
    while (s[left] != s[right])
      inc(right);
  }
  cout << s << '\n';
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;

  while (t--)
    solve();
  return 0;
}
