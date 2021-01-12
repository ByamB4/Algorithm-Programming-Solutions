#include <bits/stdc++.h>

using namespace std;

inline void solve() {
  int n, r;
  cin >> n >> r;
  while (n--) {
    int a;
    cin >> a;
    if (a >= r)
      cout << "Good boi\n";
    else
      cout << "Bad boi\n";
  }
}
int main() {
  solve();
}
