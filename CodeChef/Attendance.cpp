#include <bits/stdc++.h>

using namespace std;

inline void solve() {
  int n;
  cin >> n;
  string arr[n][2];
  for (int _ = 0; _ < n; _++)
    cin >> arr[_][0] >> arr[_][1];
  for (int i = 0; i < n; i++) {
    bool flag = true;
    for (int j = 0; j < n; j++) {
      if (i == j)
        continue;
      if (arr[i][0] == arr[j][0]) {
        cout << arr[i][0] << " " << arr[i][1] << '\n';
        flag = false;
        break;
      }
    }
    if (flag)
      cout << arr[i][0] << '\n';
  }
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
