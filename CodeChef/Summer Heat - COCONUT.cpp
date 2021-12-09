#include <bits/stdc++.h>

using namespace std;

int main() {
  int T;

  cin >> T;

  while (T--) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << (c / a) + (d / b) << '\n';
  }
  return 0;
}
