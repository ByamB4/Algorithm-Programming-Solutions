#include <bits/stdc++.h>
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

using namespace std;
using ull = unsigned long long;
using ll = long long;

inline void solve() {
  int n;
  cin >> n;
  vector <ll> a(n);
  ll sum = 0;
  for (ll &x: a) {
    cin >> x;
    sum += x;
  }
  for (int i = n; i >= 1; i--) {
    if (sum % i == 0) {
      ll needSum = sum / i;
      ll curSum = 0;
      bool ok = true;
      for (int j = 0; j < n; j++) {
        curSum += a[j];
        if (curSum > needSum) {
          ok = false;
          break;
        } else if (curSum == needSum) {
          curSum = 0;
        }
      }
      if (ok) {
        cout << n - i << '\n';
        return;
      }
    }
  }
}

int main() {
  int t;
  cin >> t;
  while (t--)
    solve();
}


