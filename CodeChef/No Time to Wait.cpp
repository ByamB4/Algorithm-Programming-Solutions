#include <bits/stdc++.h>

using namespace std;

int main() {
  int N, H, x, can = 0;
  cin >> N >> H >> x;
  for (int i = 0, tmp; i < N; i++) {
    cin >> tmp;
    if (tmp + x >= H)
      can = 1;
  }
  if (can)
    cout << "YES" << '\n';
  else
    cout << "NO" << '\n';
  return 0;
}
