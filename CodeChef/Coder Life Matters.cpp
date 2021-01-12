#include <bits/stdc++.h>

using namespace std;

inline void solve() {

  bool in[30],ans = 1;
  for (int i = 0;i < 30; i++)
    cin >> in[i];
  for (int i = 0; i < 25; i++)
    if (in[i] & in[i + 1] & in[i + 2] & in[i + 3] & in[i + 4] & in[i + 5])
      ans = 0;
  if (!ans)
    cout << "#coderlifematters" << '\n';
  else
    cout << "#allcodersarefun" << '\n';

  return;
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int t;
  cin >> t;

  while (t--)
    solve();

  return 0;
}