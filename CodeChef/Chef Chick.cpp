#include <bits/stdc++.h>

using namespace std;

inline void solve() {
  int n;
  cin >> n;
  vector <int> vi(n);
  for (int _ = 0; _ < n; ++_)
    cin >> vi[_];
  sort(vi.begin(), vi.end());
  cout << vi[0] << '\n';
}

int main() {
  int T;
  cin >> T;

  while (T--)
    solve();

  return 0;
}