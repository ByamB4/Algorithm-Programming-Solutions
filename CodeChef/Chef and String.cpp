#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  string s;
  int arr[4] = {0, 0, 0, 0};
  cin >> s;
  for (int _ = 0; _ < s.length(); _++) {
    if (s[_] == 'C')
      arr[0]++;
    else if (s[_] == 'H' && arr[1] < arr[0])
      arr[1]++;
    else if (s[_] == 'E' && arr[2] < arr[1])
      arr[2]++;
    else if (s[_] == 'F' && arr[3] < arr[2])
      arr[3]++;
  }
  cout << arr[3] << '\n';
}
