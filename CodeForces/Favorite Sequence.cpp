#include <bits/stdc++.h>
#define pb push_back
#define ll long long

using namespace std;

inline void solve() {
  ll n;
  cin >> n;
  deque <ll> d;
  for (int i = 1, b; i <= n; i++) {
    cin >> b;
    d.pb(b);
  }
  for (int j = 1; j <= n; j++) {
    if (j % 2)
      cout << d.front() << " ", d.pop_front();
    else
      cout << d.back() << " ", d.pop_back();
  }
  cout << '\n';
}
int main() {
  int t;
  cin >> t;

  while (t--)
    solve();
  return 0;
}