#include <bits/stdc++.h>

using namespace std;

int main()
{
  int T;
  cin >> T;
  while (T--)
  {
    int n;
    cin >> n;
    string s;
    cin >> s;
    char c = s[n - 1];
    bool flag = false;
    for (int i = 0; i < n - 1; i++)
    {
      if (s[i] == c)
      {
        flag = true;
        break;
      }
    }
    if (flag)
      cout << "YES" << '\n';
    else
      cout << "NO" << '\n';
  }
  return 0;
}