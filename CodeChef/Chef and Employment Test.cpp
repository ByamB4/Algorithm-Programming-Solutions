#include <bits/stdc++.h>

using namespace std;

inline void solve() {
  int n, k;
  cin >> n >> k;
  int arr[n];
  for (auto &i: arr)
    cin >> i;
  sort(arr, arr + n);
  cout << arr[(n + k) / 2] << '\n';
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}
