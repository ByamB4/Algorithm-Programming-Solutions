#include <bits/stdc++.h>

using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int n, d;
    cin >> n >> d;
    vector <int> a(n);
    for (int i = 0, tmp; i < n; i++) {
      cin >> tmp;
      a[i] = tmp;
    }
    sort(a.begin(), a.end());
    cout << (a.back() <= d || a[0] + a[1] <= d ? "YES" : "NO") << '\n';
  }
}
