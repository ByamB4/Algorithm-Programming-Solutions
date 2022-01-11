#include <bits/stdc++.h>

using namespace std;

int main() {
  int T;
  cin >> T;

  while (T--) {
    int n;
    cin >> n;
    vector <int> vi;
    while (n--) {
      int k;
      cin >> k;
      vi.push_back(k);
    }
    sort(vi.begin(), vi.end(), greater<int>());
    long long c = 0, res = 0;
    for (auto x: vi)
      if (x != 0 && x - c > 0) {
        res += x - c;
        c++;
      }
    cout << res % 1000000007 << '\n';
  }
  return 0;
}
