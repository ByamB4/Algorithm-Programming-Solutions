#include <bits/stdc++.h>
#define ll long long

using namespace std;

map<ll, ll> dp;

inline ll solve(ll n) {
  if (n <= 2) {
    dp[n] = n;
    return dp[n];
  }
  if (dp.count(n))
    return dp[n];
  dp[n] = max(n, solve(n / 2) + solve(n / 3) + solve(n / 4));
  return dp[n];
}

int main() {
  ll n;
  while (cin >> n)
    cout << solve(n) << '\n';
  return 0;
}
