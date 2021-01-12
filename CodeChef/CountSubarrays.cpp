#include <bits/stdc++.h>
#define ll long long 

using namespace std;

inline void solve() {
  int n;
  cin >> n;
  int arr[n];
  for (int _ = 0; _ < n; _++) 
    cin >> arr[_];
  int j = 0, _;
  ll ans = 0;
  for (_ = 1; _ < n; _++) {
    if (arr[_] >= arr[_ - 1])
      continue;
    else {
      ll r = (_ - j);
      r = (r * (r + 1)) / 2;
      ans += r;
      j = _;
    }
  }
  _ -= j;
  ans += ((_ * (_ + 1)) / 2);
  cout << ans << '\n';
}
int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
