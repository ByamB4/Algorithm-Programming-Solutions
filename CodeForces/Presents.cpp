#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, arr[101], tmp;
  cin >> n;
  for (int _ = 1; _ <= n; _++) {
    cin >> tmp;
    arr[tmp] = _;
  }
  for (int _ = 1; _ <= n; _++)
    cout << arr[_] << " ";
  return 0;
}
