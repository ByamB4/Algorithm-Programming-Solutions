#include <bits/stdc++.h>

using namespace std;

inline void solve() {
  int n;
  cin >> n;
  int arr[n];
  for (int _ = 0; _ < n; _++) cin >> arr[_];
  if (n % 2 == 0) {
    cout << "no\n";
    return;
  }
  int max = 1, flag = 1;
  for (int _ = 0; _ < n; _++) {
    if (arr[_] != max)
      flag = 0;
    if (_ < n / 2)
      max++;
    else
      max--;
  }
  if (flag == 1)
    cout << "yes\n";
  else
    cout << "no\n";
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--)
    solve();
}
