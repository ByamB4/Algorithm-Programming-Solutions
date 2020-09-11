#include <bits/stdc++.h>

using namespace std;

inline void solve() {
  int n, a = 0, f = 0;
  float sum = 0.0;
  cin >> n;
  for (int _ = 0, tmp; _ < n; _++) {
    cin >> tmp;
    sum += tmp;
    a += (tmp == 5);
    f += (tmp <= 2);
  }
  if (f == 0 && a > 0 && sum / n >= 4.0)
    cout << "Yes" << '\n';
  else
    cout << "No" << '\n';
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