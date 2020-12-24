#include <bits/stdc++.h>
#define all(x) (x).begin(),(x).end()
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

using namespace std;

inline void solve() {
  int x;
  cin >> x;
  vector <int> ans;
  int sum = 0, last = 9;
  while (sum < x && last > 0) {
    ans.pb(min(x - sum, last));
    sum += last;
    last--;
  }
  if (sum < x) {
    cout << -1 << "\n";
  } else {
    reverse(all(ans));
    for (int i : ans)
      cout << i;
    cout << '\n';
  }
}

int main() {
  int t;
  cin >> t;
  while (t--)
    solve();
}


