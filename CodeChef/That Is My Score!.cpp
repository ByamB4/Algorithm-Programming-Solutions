#include <bits/stdc++.h>

using namespace std;

inline void solve() {
  int n, ans = 0;
  cin >> n;
  int arr[12] = {0};
  while (n--) {
    int x, y;
    cin >> x >> y;
    arr[x] = max(arr[x], y);
  }
  for (int _ = 1; _ <= 8; _++)
    ans += arr[_];
  cout << ans << '\n';

  return;
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int t;
  cin >> t;
  while (t--)
    solve();

  return 0;
}