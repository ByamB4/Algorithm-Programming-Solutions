#include <bits/stdc++.h>

typedef long long int lli;

using namespace std;

inline void solve() {
  int n;
  cin >> n;
  lli a[n];
  int mx1 = INT_MIN, mx2 = INT_MIN;
  unordered_map<int, int> mp;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (mp.find(a[i]) != mp.end())
      mp[a[i]]++;
    else
      mp[a[i]] = 1;
    if (mp[a[i]] == 2) {
      if (a[i] > mx1) {
        mx2 = mx1;
        mx1 = a[i];
      }
      else if (a[i] > mx2) 
        mx2 = a[i];
      mp[a[i]] = 0;
    }
  }
  if (mx1 == INT_MIN || mx2 == INT_MIN)
    cout << -1 << '\n';
  else
    cout << mx1 * mx2 << '\n';
}
int main() {
  int t;
  cin >> t;
  while (t--) 
    solve();
}
