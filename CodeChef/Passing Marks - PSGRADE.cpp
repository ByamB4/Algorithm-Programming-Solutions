#include <bits/stdc++.h>

using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int arr[7];
    for (int i = 0; i < 7; i++) {
      cin >> arr[i];
    }
    if ((arr[0] > arr[4] || arr[1] > arr[5] || arr[2] > arr[6]) || (arr[4] + arr[5] + arr[6] < arr[3])) { 
      cout << "NO" << '\n';
    } else {
      cout << "YES" << '\n';
    }
  }
}
