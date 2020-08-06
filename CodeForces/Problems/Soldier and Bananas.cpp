#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int k, n, w, total = 0;
  cin >> k >> n >> w;
  for (int i = 1; i <= w; i++)
    total += k * i;
  if (n >= total)
    cout << "0" << '\n';
  else
    cout << abs(total - n) << '\n';
  return 0;
}
