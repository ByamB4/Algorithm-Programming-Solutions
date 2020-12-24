#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int t;
  string s;
  cin >> t >> t >> s;

  while (t--)
    for (int i = 0; i < s.length() - 1; i++)  if (s[i] == 'B' && s[i + 1] == 'G') {
        swap(s[i], s[i + 1]);
        i++;
      }
  cout << s;
  return 0;
}
