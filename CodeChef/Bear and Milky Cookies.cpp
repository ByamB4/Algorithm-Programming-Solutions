#include <bits/stdc++.h>

using namespace std;


inline void solve() {
  int n;
  cin >> n;
  string s[n];
  for (int i = 0; i < n; i++)
    cin >> s[i];
  if (s[n - 1] == "cookie") {
    cout << "NO" << '\n';
    return;
  }
  for (int i = 0; i < n - 1; i++) if (s[i] == "cookie" && s[i + 1] == "cookie") {
    cout << "NO" << '\n';
    return;
  }
  cout << "YES" << '\n';
  return;
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int t;
  cin >> t;

  while (t--)
    solve();

  return 0;
}