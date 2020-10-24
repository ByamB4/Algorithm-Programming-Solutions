#include <bits/stdc++.h>

using namespace std;

inline bool isDistinct(int var1) {
  int arr[10] = {0};
  while (var1 > 0) {
    arr[var1 % 10] += 1;
    if (arr[var1 % 10] > 1) {
      return false;
    }
    var1 /= 10;
  }
  return true;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int n;
  cin >> n;
  for (int _ = n + 1; ; _++) {
    if (isDistinct(_)) {
      cout << _ << '\n';
      return 0;
    }
  }
}