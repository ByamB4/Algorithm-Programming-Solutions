#include <bits/stdc++.h>
#define ll unsigned long long int

using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    ll n, a, b, k, ans;
    ll x, y, tmp;
    cin >> n >> a >> b >> k;
    x = a;
    y = b;

    while (y) {
      tmp = y;
      y = x % y;
      x = tmp;
    }
    ans = n / a + n / b - 2 * (n / ((a * b) / x));
    if (ans < k)
      cout << "Lose";
    else
      cout << "Win";
    cout << '\n';
  }

  return 0;
}
