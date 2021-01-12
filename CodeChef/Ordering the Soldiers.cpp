#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

using namespace std;
using ull = unsigned long long;
using ll = long long;

const ll INF = ll(1e18) + 1;

inline void solve() {
  ll n;
  cin >> n;
  ll a[n], b[n];
  for (ll _ = 0; _ < n; _++) {
    cin >> a[_];
    b[_] = _ + 1;
  }
  for (ll i = n - 1; i >= 0; i--) {
    int shift = a[i];
    int tmp = b[i - shift];
    for (int j = i - shift; j < i; j++) 
      b[j] = b[j + 1];
    b[i] = tmp;
  }
  for (ll _ = 0; _ < n; _++)
    cout << b[_] << " ";
  cout << '\n';
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
