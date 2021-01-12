#include <bits/stdc++.h>

using namespace std;

inline void solve() {
  int n, k, sum = 0, tmp;
  cin >> n >> k;
  for (int _ = 0; _ < n; _++) {
    cin >> tmp;
    sum += tmp;
  }
  int sum1 = sum + 1;
  for (int _ = 1; _ < k; _++) {
    sum1 += sum + 1;
    sum += (sum1 - sum - 1);
  }
  if (sum1 % 2)
    cout << "odd" << '\n';
  else
    cout << "even" << '\n';
  return;
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
