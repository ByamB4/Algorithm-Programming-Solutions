#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;

  for (int _ = 0; _ < n; _++) {
    if (_ % 2 == 0)
      cout << "I hate ";
    else
      cout << "I love ";
    if (_ != n - 1)
      cout << "that ";
    else
      cout << "it ";
  }
}
