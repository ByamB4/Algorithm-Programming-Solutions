#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int a, b;
    cin >> a >> b;
    int m = a + b;
    int a1 = a / 10, a2 = a % 10, b1 = b / 10, b2 = b % 10;
    if (a1)
      m = max(m, b1 * 10 + b2 * 10 + a1 + a2);
    if (b1)
      m = max(m, a1 * 10 + a2 * 10 + b1 + b2);
    cout << m << '\n';
  }
}
