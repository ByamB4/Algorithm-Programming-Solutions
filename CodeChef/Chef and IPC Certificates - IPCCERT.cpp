#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m, k;
  cin >> n >> m >> k;
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    int sum = 0, t = 0, kval = 0;
    for (int j = 0; j < k; j++) {
      cin >> t;
      sum += t;
    }
    cin >> kval;
    if (sum >= m && kval <= 10)
      cnt++;
  }
  cout << cnt << '\n';
  return 0;
}
