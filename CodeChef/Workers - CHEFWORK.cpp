#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  int c[n], t[n];

  for (int i = 0; i < n; i++)
    cin >> c[i];
  int imin[3] = {100000,100000,100000};
  for (int i = 0; i < n; i++) {
    cin >> t[i];
    if (c[i] < imin[t[i] - 1])
      imin[t[i] - 1] = c[i];
  }
  cout << min(imin[0] + imin[1], imin[2]);
  return 0;
}
