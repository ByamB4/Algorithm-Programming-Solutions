#include <bits/stdc++.h>

using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int n, l, r, k, ans = 0;
    cin >> n >> l >> r >> k;
    int arr[n];
    for (int _ = 0; _ < n; _++)
      cin >> arr[_];
    sort(arr, arr + n);

    for (int _ = 0; _ < n; _++) {
      if (k < arr[_])
        break;
      if (arr[_] > l && arr[_] < r) {
        ans++;
        k -= arr[_];
      }
    }
    cout << ans << '\n';
  }

  return 0;
}
