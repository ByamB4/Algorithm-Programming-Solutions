#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  double s = 0;
  for (int i = 0; i < n; i++) {
    double _;
    cin >> _;
    s += _;
  }
  printf("%.12f", s / n);
}
