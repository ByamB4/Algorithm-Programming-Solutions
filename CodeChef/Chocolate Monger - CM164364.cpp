#include <bits/stdc++.h>

using namespace std;

int main()
{
  int T;
  cin >> T;
  while (T--)
  {
    int n, x, s = 0;
    cin >> n >> x;
    int a[n], b[n];

    for (int i = 0; i < n; i++)
      cin >> a[i];

    sort(a, a + n);

    for (int i = 0; i < n - 1; i++)
    {
      if (a[i] != a[i + 1])
      {
        b[s++] = a[i];
      }
    }
    b[s++] = a[n - 1];

    int eat = n - x;

    if (s == eat)
      cout << s << endl;
    else if (s > eat)
      cout << eat << endl;
    else if (eat > s)
      cout << s << endl;
  }
}