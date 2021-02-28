#include <bits/stdc++.h>

using namespace std;

int main() {
  vector <int> vi {0,0,1,1,1,2,2,3,3,4};
  for (int _ = 0; _ < vi.size(); _++) {
    int initial = _;
    while (vi[_] == vi[_ + 1]) {
      _++;
    }
    vi[initial] = vi[_];
  }
  for (int _ = 0; _ < vi.size(); _++)
    cout << vi[_] << '\n';
}
