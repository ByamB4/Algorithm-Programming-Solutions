#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n, k, v, sum = 0;
    cin >> n >> k >> v;
    int arr[n];
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
      sum += arr[i];
    }
    int total = n + k;
    total *= v;
    total -= sum;
    if (total > 0 && total % k == 0)
      cout << total / k << '\n';
    else
      cout << "-1" << '\n';
  }
  
  return 0;
}