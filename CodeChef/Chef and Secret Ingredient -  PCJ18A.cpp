#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
  ll t;
  cin >> t;
  while (t--)
  {
    ll n, x, found = 0;
    cin >> n >> x;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
      if (a[i] >= x)
        found = 1;
    }
    if (found)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
}
