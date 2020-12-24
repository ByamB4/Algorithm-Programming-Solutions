#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n, s = 0, a = 0, ans = 0;
  cin >> n;

  vector <int> vi(n);
  for (int i = 0; i < n; i++) {
    cin >> vi[i];
    s += vi[i];
  }
  s /= 2;
  sort(vi.begin(), vi.end());
  while (a <= s) {
    ++ans;
    a += vi[n - ans];
  }
  cout << ans << '\n';

  return 0;
}
