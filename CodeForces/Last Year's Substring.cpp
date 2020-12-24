#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long

using namespace std;

inline void solve() {
  ll n;
  string a;
  cin >> n >> a;
  ll L = 0, R = 0;
  string x, y, p = "2020";
  for (int i = 0; i < 4; i++) {
    x += a[i];
    if (x == p.substr(0, i + 1))
      L = i + 1;
  }
  for (int i = n - 1; i >= n - 4; i--) {
    y = a[i] + y;
    if (y == p.substr(4 - (n - i), (n - i)))
      R = n - i;
  }
  if (L + R >= 4)
    cout << "YES\n";
  else
    cout << "NO\n";
}
int main() {
  int t;
  cin >> t;
  while (t--)
    solve();
  
  return 0;   
}