#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

using namespace std;

vector<int> vi;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
      int tmp;
      cin >> tmp;
      vi.pb(tmp);
    }
    sort(all(vi));
    int a = 0, b = 0, c = 0, d = 0;
    for (int i = 0; i < k; i++) a += vi[i];
    for (int i = k; i < n; i++) b += vi[i];
    for (int i = 0; i < n - k; i++) c += vi[i];
    for (int i = n - k; i < n; i++) d += vi[i];
    cout << max(abs(a - b), abs(c - d)) << '\n';
    vi.clear();
  }

  return 0;
}
