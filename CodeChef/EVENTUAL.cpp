#include <bits/stdc++.h>

using namespace std;

int main()
{
  int T;
  cin >> T;
  while (T--)
  {
    int n;
    string s;
    cin >> n >> s;
    map<char, int> m;
    for (int i = 0; i < s.size(); i++)
      m[s[i]]++;
    int f = 0;
    map<char, int>::iterator t = m.begin();
    {
      while (t != m.end())
      {
        if ((t->second) % 2 != 0)
        {
          f = 1;
          break;
        }
        t++;
      }
    }
    if (f == 0)
      cout << "YES" << '\n';
    else
      cout << "NO" << '\n';
  }
}