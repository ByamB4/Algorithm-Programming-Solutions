#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, ans = 0;
  cin >> n;
  int a[n];
  for (int _ = 0; _ < n; _++) {
    cin >> a[_];
  }
  for (int _ = 0; _ < n; _++) {
    if (a[_] != a[_ + 1])
      ans++;
  }
  cout << ans << '\n';
  return 0;
}