#include <bits/stdc++.h>

using namespace std;

int main()
{
  int T;
  cin >> T;
  while (T--)
  {
    int n, isum = 0;
    cin >> n;
    while (n--)
    {
      int a;
      cin >> a;
      isum += a;
    }
    if (isum >= 0)
      cout << "YES" << '\n';
    else
      cout << "NO" << '\n';
  }
  return 0;
}