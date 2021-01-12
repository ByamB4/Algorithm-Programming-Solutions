#include <bits/stdc++.h>
#define fori(x)         for(int i = 0; i < (int) x; i++)
#define forj(x)         for(int j = 0; j < (int) x; j++)

using namespace std;

int main() {
  short int n = 6, m = 6, mas[n][m];
  fori (6) forj(6) cin >> mas[i][j];
  short int imax = mas[0][0] + mas[0][1] + mas[0][2] + mas[1][1] + mas[2][0] + mas[2][1] + mas[2][2];
  fori (n - 2)
    forj (m - 2) {
      short int all = mas[i][j] + mas[i][j+1] + mas[i][j+2] + mas[i+1][j+1] + mas[i+2][j] + mas[i+2][j+1] + mas[i+2][j+2];
      imax = (all > imax ? all : imax);
    }
  cout << imax << '\n';
}
