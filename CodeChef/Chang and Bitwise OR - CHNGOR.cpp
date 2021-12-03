#include <bits/stdc++.h>

using namespace std;

int main() {
  int T;
  cin >> T;

  while (T--) {
    int n, ans = 0;
    cin >> n;

    while (n--) {
      int tmp;
      cin >> tmp;
      ans |= tmp;
    }

    cout << ans << '\n';
  }

  return 0;
}
