#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  vector <int> myInt;
  cin >> n;
  while (n--) {
    int a;
    cin >> a;
    myInt.push_back(a);
  }
  int counter = 0;
  for (int i = 0 ; i < myInt.size(); i++)
    for (int j = i + 1 ; j < myInt.size(); j++)
      if (myInt[i] == myInt[j]) {
        counter++;
        myInt.erase(myInt.begin() + j);
        break;
      }
  cout << counter << '\n';
}
