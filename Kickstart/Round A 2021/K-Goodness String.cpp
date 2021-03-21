#include <bits/stdc++.h>
#define ll long long

using namespace std;

inline int solve() {
  int n, k, score = 0;
  string s;

  cin >> n >> k >> s;

  for (int i = 0; i < n / 2; i++) {
    if (s[i] != s[n - (i + 1)]) {
      cout << s[i] << " " << s[n - (i + 1)] << '\n';
      score += 1;
    }
  }
  return score;
  if (score >= k)
    return 0;
  else return k - score;
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