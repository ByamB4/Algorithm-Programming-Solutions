#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main() {
  int T;
  cin >> T;

  while (T--) {
    ll n, x;
    cin >> n >> x;
    set <int> visited;

    visited.insert(x);
    char directions[n];
    for (int _ = 0; _ < n; _++)
      cin >> directions[_];
    for (int _ = 0; _ < n; _++) {
      if (directions[_] == 'L')
        x--;
      else
        x++;
      visited.insert(x);
    }
    cout << visited.size() << '\n';
  }
  return 0;
}
