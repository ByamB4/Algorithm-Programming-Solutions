#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, s, count[5] = {0};
  cin >> n;
  while (n--) {
    cin >> s;
    count[s]++;
  }
  int total = count[4] + count[3] + count[2] / 2;
  count[1] -= count[3];
  if (count[2] % 2 == 1) {
    total += 1;
    count[1] -= 2;
  }
  if (count[1] > 0)
    total += (count[1] + 3) / 4;
  cout << total << '\n';
  return 0;
}
