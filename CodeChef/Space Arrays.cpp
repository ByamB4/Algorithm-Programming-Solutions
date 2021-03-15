#include <bits/stdc++.h>

using namespace std;

inline void solve() {
  int n, isum = 0;
  cin >> n;
  vector <int> vi(n);
  for (int _ = 0, i; _ < n; _++) {
    cin >> i;
    vi[i - 1] += 1;
  }
  for (int _ = 0; _ < n; _++)
    vi[_] += vi[_ - 1];
  for (int _ = 0; _ < n; _++) {
    if (vi[_] < _ + 1) {
      cout << "Second\n";
      return;
    }
    isum += vi[_];
  }
  cout << ((isum - (long long) n * (n + 1) / 2) % 2 == 0 ? "Second\n" : "First\n");
}

int main() {
  int T;
  cin >> T;
  while (T--)
    solve();

  return 0;
}

