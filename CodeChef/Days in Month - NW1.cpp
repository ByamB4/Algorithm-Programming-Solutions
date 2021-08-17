#include <bits/stdc++.h>

using namespace std;

int main() {
  int T;
  cin >> T;

  while (T--) {
    int freq[7] = {0, 0, 0, 0, 0, 0, 0}, n, i, j, k;
    string week_day,week[7] = {"mon", "tues", "wed", "thurs", "fri", "sat", "sun"};
    cin >> n >> week_day;
    for (i = 0; i < 7; i++) {
      if (week_day == week[i]) {
        k = i;
        for (j = 0; j < n; j++) {
          freq[k] = freq[k] + 1;
          k++;
          if(k == 7) 
            k = 0;
        }
      }
    }
    for (i = 0; i < 7; i++)
      cout << freq[i] << ' ';
    cout << '\n';
  }
  return 0;
}
