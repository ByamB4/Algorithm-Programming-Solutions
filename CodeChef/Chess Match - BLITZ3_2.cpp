#include <bits/stdc++.h>

using namespace std;

int main() {
  int T;
  cin >> T;

  while (T--) {
    int a, b, c;
    cin >> a >> b >> c;

    cout << (2 * (180 + a)) - (b + c) << '\n';
  }

  return 0;
}
