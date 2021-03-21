#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int MAXN = 1100;

int R, C;
int v[MAXN][MAXN];
int ps[MAXN][MAXN][4];

int xc[4] = {-1, 1, 0, 0};
int yc[4] = {0, 0, -1, 1};

inline void solve() {
  cin >> R >> C;
  for (int i = 1; i <= R; i++)
    for (int j = 1; j <= C; j++)
      cin >> v[i][j];

  for (int i = 0; i < MAXN; i++)
    for (int j = 0; j < MAXN; j++)
      for (int k = 0; k < 4; k++)
        ps[i][j][k] = 0;

  for (int i = 1; i <= R; i++)
    for (int j = 1; j <= C; j++) {
      if (v[i][j]) {
        ps[i][j][0] = 1 + ps[i-1][j][0];
        ps[i][j][2] = 1 + ps[i][j-1][2];
      }
    }

  for (int i = R; i >= 1; i--)
    for (int j = C; j >= 1; j--) {
      if (v[i][j]) {
        ps[i][j][1] = 1 + ps[i+1][j][1];
        ps[i][j][3] = 1 + ps[i][j+1][3];
      }
    }

  int ans = 0;
  for (int i = 1; i <= R; i++)
    for (int j = 1; j <= C; j++) {
      for (int k = 0; k < 2; k++)
        for (int l = 2; l < 4; l++) {
          int x = ps[i][j][k];
          int y = ps[i][j][l];

          ans += max (0, (min (x, y / 2) - 1));
          ans += max (0, (min (y, x / 2) - 1));
        }
    }
  cout << ans << "\n";
}

int main() {
  ios_base::sync_with_stdio(0);

  int T; 
  cin >> T;
  for (int i = 0; i < T; i++) {
    cout << "Case #" << i + 1 << ": ";
    solve();
  }
}
