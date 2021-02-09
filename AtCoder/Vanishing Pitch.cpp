#include <bits/stdc++.h>

using namespace std;

int main() {
  int v, t, s, d;
  cin >> v >> t >> s >> d;
  
  if (v * t > d || v * s < d)
    cout << "Yes" << '\n';
  else
    cout << "No" << '\n';

  return 0;
}
