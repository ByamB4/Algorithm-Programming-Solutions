#include <bits/stdc++.h>

using namespace std;

inline void solve() {
  int n, imax = -1;
  cin >> n;
  int arr[n], arr_[n];
  for (int _ = 0; _ < n; _++)
    cin >> arr[_];
  for (int _ = 0; _ < n; _++)
    cin >> arr_[_];

  for (int _ = 0; _ < n; _++) {
    int total = max(arr[_] * 20 - arr_[_] * 10, 0);
    imax = max(imax, total);
  }
  cout << imax << '\n';
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
}