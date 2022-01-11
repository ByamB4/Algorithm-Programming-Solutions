#include <bits/stdc++.h>

using namespace std;

int main() {
  int T;
  cin >> T;

  while (T--) {
    double n, cnt = 0;
    string s;
    cin >> n >> s;
    for (int _ = 0; _ < s.length(); _++)
      if (s[_] == '1')
        cnt++;
    if (((120 - n) + cnt) / 120 * 100 >= 75)
      cout << "YES";
    else
      cout << "NO";
    cout << '\n';
  }
  return 0;
}
