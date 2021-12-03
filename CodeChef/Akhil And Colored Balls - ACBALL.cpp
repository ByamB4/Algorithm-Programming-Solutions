#include <bits/stdc++.h>

using namespace std;

int main() {
  int T;
  cin >> T;

  while (T--) {
    string x, y;
    cin >> x >> y;

    for (int _ = 0; _ < x.length(); _++) {
      if (x[_] == y[_] && x[_] == 'B')
        cout << "W";
      else if (x[_] == y[_] && x[_] == 'W')
        cout << "B";
      else if (x[_] != y[_])
        cout << "B";
    }
    cout << '\n';
  }

  return 0;
}
