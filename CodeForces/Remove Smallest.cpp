#include <bits/stdc++.h>

using namespace std;

vector <int> vi;
inline void solve() {
  int n;
  cin >> n;
  while (n--) {
    int tmp;
    cin >> tmp;
    vi.push_back(tmp);
  }
  sort(vi.begin(), vi.end());
  for (int _ = 0; _ < vi.size() - 1; _++) {
    if (vi[_ + 1] - vi[_] > 1) {
      cout << "NO" << '\n';
      vi.clear();
      return;
    }
  }
  vi.clear();
  cout << "YES" << '\n';
  return;
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}
