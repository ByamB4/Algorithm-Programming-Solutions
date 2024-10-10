#include <bits/stdc++.h>

using namespace std;

#define N 20
#define INF (int)2e+9

int main() {
  int n, k, s, ss = 0, ans = INF;
  int a[N];

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> a[i];
    ss += a[i];
  }
  for (int i = 0; i < (1 << n); i++) {
    k = i, s = 0;
    for (int j = 0; j < n; j++) {
      if (k & (1 << j)) s += a[j];
    }
    ans = min(ans, max(s, ss - s));
  }
  cout << ans << '\n';
  return 0;
}
