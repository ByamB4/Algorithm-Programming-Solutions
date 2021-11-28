#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  
  while (t--) {
    int n, k, s = 0, tmp;
    cin >> n >> k;
    
    while (n--) {
      cin >> tmp;
      s += tmp;
    }
    if (s % k == 0)
      cout << "0\n";
    else
      cout << "1\n";
  }
  return 0;
}
