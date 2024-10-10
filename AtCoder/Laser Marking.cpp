#include <bits/stdc++.h>

using namespace std;
using pi = pair<int, int>;

long double dist(pi l, pi r) {
  long long v = 0;
  v += (l.first - r.first) * (l.first - r.first);
  v += (l.second - r.second) * (l.second - r.second);
  return sqrtl(((long double)v));
}

int main() {
  int n, s, t;
  cin >> n >> s >> t;
  vector<pi> x(n), y(n);
  for (int i = 0; i < n; i++)
  {
    cin >> x[i].first >> x[i].second >> y[i].first >> y[i].second;
  }

  long double res = 8e18;
  vector<int> p;
  for (int i = 0; i < n; i++)
  {
    p.push_back(i);
  }

  do
  {
    for (int i = 0; i < (1 << n); i++)
    {
      long double cres = 0.0;
      pi cur = make_pair(0, 0);
      for (int j = 0; j < n; j++)
      {
        int el = p[j];
        if (i & (1 << j))
        {
          cres += (dist(cur, x[el]) / ((long double)s));
          cres += (dist(x[el], y[el]) / ((long double)t));
          cur = y[el];
        }
        else
        {
          cres += (dist(cur, y[el]) / ((long double)s));
          cres += (dist(y[el], x[el]) / ((long double)t));
          cur = x[el];
        }
      }
      res = min(res, cres);
    }
  } while (next_permutation(p.begin(), p.end()));

  cout << fixed << setprecision(12) << res << "\n";

  return 0;
}
