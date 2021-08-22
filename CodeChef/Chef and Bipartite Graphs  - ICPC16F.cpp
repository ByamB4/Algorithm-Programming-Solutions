#include "bits/stdc++.h"
using namespace std;

typedef long long ll;
const ll mod = 1000000007;
const char nl = '\n';

void solve()
{
  ll i, j, k, l, n, r, m, u, v, x, y, d, D;

  cin >> n >> m >> d >> D;
  vector<pair<ll, ll>> ans;
  if (n * d > m || m > n * D)
  {
    cout << -1 << nl;
    return;
  }
  vector<ll> cnt(n);

  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      ans.push_back({j, (j + i) % n});
      m--;
      cnt[j]++;
      if (m == 0)
        break;
    }
    if (m == 0)
      break;
  }

  for (i = 0; i < n; i++)
  {
    if (cnt[i] < d or cnt[i] > D)
    {
      cout << -1 << nl;
      return;
    }
  }

  for (auto z : ans)
    cout << z.first + 1 << " " << z.second + 1 << nl;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t = 1, i = 1;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}
