#include <bits/stdc++.h>

using namespace std;

int main() {
  int T;
  cin >> T;

  while (T--) {
    int m, h;
    cin >> m >> h;
    int res = m / (h * h);
    if (res <= 18)
      cout << "1";
    else if (res >= 19 && res <= 24)
      cout << "2";
    else if (res >= 25 && res <= 29)
      cout << "3";
    else if (res >= 30)
      cout << "4";
    cout << '\n';
  }
  return 0;
}
