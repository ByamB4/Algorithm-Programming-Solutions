#include <bits/stdc++.h>

using namespace std;

inline void solve() {
  int n;
  cin >> n;
  int arr[2][n], ans[2];

  for (int i = 0; i < 2; i++) {
    int imax = -1, total = 0;
    for (int j = 0; j < n; j++) {
      cin >> arr[i][j];
      total += arr[i][j];
      imax = (arr[i][j] > imax ? arr[i][j] : imax);
    }
    ans[i] = total - imax;
  }
  if (ans[0] > ans[1])
    cout << "Bob\n";
  else if (ans[0] < ans[1])
    cout << "Alice\n";
  else
    cout << "Draw\n";

}
int main() {
  int t;
  cin >> t;
  while (t--)
    solve();
}
