#include <bits/stdc++.h>

using namespace std;

inline int S(string n) {
  return (n[0] - '0') + (n[1] - '0') + (n[2] - '0');
}

int main() {
  string A, B;
  cin >> A >> B;

  cout << max(S(A), S(B)) << '\n';

  return 0;
}
