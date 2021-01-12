#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n, a = 0, b = 0, c = 0;
  cin >> n;
  while (n--) {
    int aa, bb, cc;
    cin >> aa >> bb >> cc;
    a += aa; b += bb; c += cc;
  }
  if (a == 0 && b == 0 && c == 0)
    cout << "YES" << '\n';
  else
    cout << "NO" << '\n';
  return 0;
}
