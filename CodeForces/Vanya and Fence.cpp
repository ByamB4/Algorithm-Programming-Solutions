#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, h, ans = 0, tmp;
  cin >> n >> h;
  while (n--) {
    cin >> tmp;
    if (tmp > h) 
      ans += 2;
    else
      ans++;
  }
  cout << ans << '\n';
  return 0;
}