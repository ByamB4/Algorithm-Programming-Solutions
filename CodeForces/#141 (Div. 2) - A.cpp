#include <bits/stdc++.h>

using namespace std;

int main() {
  int arr[5], ans = 3;
  for (int _ = 0; _ < 4; _++)
    cin >> arr[_];
  sort(arr, arr + 4);
  for (int _ = 0; _ < 3; _++)
    if (arr[_] != arr[_ + 1])
      ans--;

  cout << ans << '\n';
  return 0;
}
