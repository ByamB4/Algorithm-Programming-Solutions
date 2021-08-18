#include <bits/stdc++.h>

using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    long int a[26], i, ans = 0;
    for (i = 0; i < 26; i++)
      cin >> a[i];
    string s;
    cin >> s;
    int n = s.length();
    int c[26] = {0};
    for (i = 0; i < n; i++)
      c[s[i] - 'a']++;
    for (i = 0; i < 26; i++) 
      if (c[i] == 0)
        ans += a[i];
    cout << ans << endl;
  }
  return 0;
}

