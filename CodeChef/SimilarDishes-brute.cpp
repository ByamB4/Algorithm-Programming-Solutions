#include <bits/stdc++.h>

using namespace std;

inline void solve() {
  int n, ans = 0, _, __;
  cin >> n;
  vector < vector<string> > vs(n * 2);
  for (_ = 0; _ < n * 2; _++) {
    for (__ = 0; __ < 4; __++) {
      string tmp;
      cin >> tmp;
      vs[_].push_back(tmp);
    }
  }
  for (_ = 0; _ < n * 2; _ += 2) {
    int cnt = 0;
    for (__ = 0; __ < 4; __++) {
      for (int i = 0; i < 4; i++) {
        if (vs[_][__] == vs[_ + 1][i]) {
          cnt += 1;
        }
      }
    }
    if (cnt >= 2)
      cout << "similar\n";
    else 
      cout << "dissimilar\n";
  }
}
int main() {
  int t = 1;
  while (t--) {
    solve();
  }
}

