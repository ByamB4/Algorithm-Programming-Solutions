#include <bits/stdc++.h>

using namespace std;

int main() {
  int T;
  cin >> T;

  while (T--) {
    int n;
    cin >> n;
    int a[n + 5];
    for (int i = 0; i < n + 5; i++)
      a[i] = 0;
    for (int i = 0; i < n; i++) 
      cin >> a[i];
    int p = 0;
    for (int i = 0; i < n; i++) {
      if (a[i] == 1) {
        if (a[i + 1] == 0 && a[i + 2] == 0 && a[i + 3] == 0 && a[i + 4] == 0 && a[i + 5] == 0)
          continue;
        else {
          p = 1;
          break;
        }
      }
    }
    if (p == 1)
      cout << "NO" << '\n';
    else
      cout << "YES" << '\n';
  }

  return 0;
}
