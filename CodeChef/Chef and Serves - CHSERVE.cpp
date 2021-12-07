#include <bits/stdc++.h>

using namespace std;

int main() {
  int T;

  cin >> T;

  while (T--) {
    long long int p1, p2, k;
    cin >> p1 >> p2 >> k;

    int rem = (p1 + p2) / k;
    if (rem % 2 == 0)
      cout << "CHEF";
    else
      cout << "COOK";
    cout << '\n';
  }
  return 0;
}
