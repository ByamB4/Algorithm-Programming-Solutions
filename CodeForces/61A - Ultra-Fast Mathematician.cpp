#include <bits/stdc++.h>

using namespace std;

int main() {
  string s1, s2;
  cin >> s1 >> s2;
  for (int _ = 0; _ < s1.length(); _++) {
    if (s1[_] == s2[_])
      s1[_] = '0';
    else
      s1[_] = '1';
  }
  cout << s1 << '\n';
  return 0;
}
