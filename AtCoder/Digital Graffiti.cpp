#include <bits/stdc++.h>
#define rep(_, n) for (int _ = 0; _ < n; _++)

using namespace std;

int main() {
  int H, W, vertex = 0;

  cin >> H >> W;

  char arr[H][W];

  rep(i, H)
    rep(j, W)
      cin >> arr[i][j];

  rep(i, H - 1)
    rep(j, W - 1) {
      int count = 0;
      if (arr[i][j] == '#') count++;
      if (arr[i + 1][j] == '#') count++;
      if (arr[i][j + 1] == '#') count++;
      if (arr[i + 1][j + 1] == '#') count++;
      if (count == 1 || count == 3)
        vertex++;
    }

  cout << vertex << '\n';
  return 0;
}
