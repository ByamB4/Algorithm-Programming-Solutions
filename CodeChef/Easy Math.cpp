#include <bits/stdc++.h>

using namespace std;

inline int findSumDigits(int s) {
  int res = 0;
  while (s > 0) {
    res += s % 10;
    s /= 10;
  }
  return res;
}
inline void solve() {
  int n, imax = -1;
  cin >> n;
  int arr[n];
  for (int _ = 0; _ < n; _++)
    cin >> arr[_];
  for (int i = 0; i < n; i++)
    for (int j = i + 1; j < n; j++)
      imax = max(findSumDigits(arr[i] * arr[j]), imax);
  cout << imax << '\n';
  return;
}
int main() {
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}
