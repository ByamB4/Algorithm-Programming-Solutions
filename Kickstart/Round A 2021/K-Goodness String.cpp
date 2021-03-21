#include <bits/stdc++.h>
#define ll long long

using namespace std;

inline int solve() {
  int n, k, score = 0;
  string s;

  cin >> n >> k >> s;

  for (int i = 0; i < n / 2; ++i) {
    if (s[i] != s[n - 1 - i]) {
      score++;
    }
  }
  return abs(score - k);
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int T, i = 1;
  cin >> T;

  while (T--) {
    cout << "Case #" << i++ << ": " << solve() << '\n';
  }
}