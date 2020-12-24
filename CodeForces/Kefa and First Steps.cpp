#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, ans = 1, count = 1;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  for (int i = 1; i < n; i++) {
    if (arr[i] >= arr[i - 1])
      count++;
    else {
      ans = max(ans, count);
      count = 1;
    }
  }
  ans = max(ans, count);
  cout << ans << '\n';
}