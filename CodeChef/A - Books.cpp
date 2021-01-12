#include <bits/stdc++.h>

using namespace std;

inline void solve() {
  int n;
  cin >> n;
  vector <int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  reverse(a.begin(), a.end());
  vector <int> ans(n);
  ans[0] = 0;
  for (int i = 1; i < n; i++) {
    if (a[i] == a[i - 1]) {
      ans[i] = ans[i - 1];
    } else {
      ans[i] = i;
    }
  }
  for (int i = n - 1; i >= 0; i--)
    cout << ans[i] << " ";
  cout << '\n';
  return;
}
int main() {
  int t;
  cin >> t;
  while (t--)
    solve();

  return 0;
}
