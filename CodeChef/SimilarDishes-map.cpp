#include <bits/stdc++.h>

using namespace std;

inline void solve() {
  map <string, int> mp;
  for (int _ = 0; _ < 8; _++) {
    string tmp;
    cin >> tmp;
    mp[tmp]++;
  }
  int cnt = 0;
  map <string, int>::iterator it = mp.begin();
  for (it = mp.begin(); it != mp.end(); it++) if (it->second == 2)
      cnt++;
  if (cnt >= 2)
    cout << "similar" << '\n';
  else
    cout << "dissimilar" << '\n';
}
int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
