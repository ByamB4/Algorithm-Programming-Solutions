#include <bits/stdc++.h>

using namespace std;

inline void sol() {
  string s;
  cin >> s;
  int a = 0;
  for (int i = 0; i < s.length() - 1; i++) {
    if (s[i] == 'x' && s[i + 1] != 'x' || (s[i] == 'y' && s[i + 1] != 'y')) {
      a++;
      i++;
    }
  }
  cout << a << '\n';
}
int main() {
  int t;
  cin >> t;
  while (t--)
    sol();

  return 0;
}
