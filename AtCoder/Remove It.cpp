#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, x;
  cin >> n >> x;
  for (int _ = 0, a; _ < n; _++) {
    cin >> a;
    if (a != x)
      cout << a << " ";
  }
  return 0;
}
