#include <bits/stdc++.h>

using namespace std;

int main() {
  int T;
  cin >> T;

  while (T--) {
    int times[10][10];
    for (int i = 0; i < 10; i++) {
      for (int j = 0; j < 10; j++) {
        cin >> times[i][j];
      }
    }
    int ans = 0;
    for (int i = 0; i < 10; i++) {
      for (int j = 0; j < 10; j++) {
        if (times[i][j] <= 30)
          ans++;
      }
    }
    if (ans >= 60)
      cout << "yes" << '\n';
    else
      cout << "no" << '\n';
  }
  return 0;
}
