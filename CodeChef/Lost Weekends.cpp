#include <bits/stdc++.h>

using namespace std;

inline void solve() {
  int p, sum = 0;

  for (int i = 0, tmp; i < 5; i++) {
    cin >> tmp;
    sum += tmp;
  }
  cin >> p;
  int ans = (sum * p) - (24 * 5);
  if (ans > 0)
    cout << "Yes\n";
  else
    cout << "No\n";
}
int main() {
  int T;
  cin >> T;
  while (T--)
    solve();
}
