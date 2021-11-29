#include <bits/stdc++.h>

using namespace std;

int main() {
  int T;
  cin >> T;

  while (T--) {
    int n;
    cin >> n;

    double sum = 0;
    while (n--) {
      double pi, qi, di;
      cin >> pi >> qi >> di;
      double in_am = pi + (pi * (di / 100));
      double af_dis = in_am * (di / 100);
      double loss = (pi - (in_am - af_dis)) * qi;
      sum += loss;
    }
    printf("%.9lf\n", sum);
  }
  return 0;
}
