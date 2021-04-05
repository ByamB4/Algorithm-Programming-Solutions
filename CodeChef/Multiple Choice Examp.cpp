#include <bits/stdc++.h>

using namespace std;

inline void solve() {
  int n, ans = 0;
  cin >> n;
  string in, out;
  cin >> in >> out;
  for (int i = 0; i < n; i++) {
    if (out[i] == 'N')
      continue;
    if (in[i] == out[i])
      ans++;
    else
      i++;
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
