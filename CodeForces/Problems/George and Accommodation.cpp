#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;

  int a, b, ans = 0;
  while (n--) {
    cin >> a >> b;

    if (b - a >= 2) {
      ans++;
    }
  }
  cout << ans << '\n';
  return 0;
}