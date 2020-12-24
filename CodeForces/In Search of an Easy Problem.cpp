#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, tot = 0;
  cin >> n;

  while (n--) {
    int a;
    cin >> a;
    tot += a;
  }
  if (tot)
    cout << "HARD" << '\n';
  else
    cout << "EASY" << '\n';
  return 0;
}