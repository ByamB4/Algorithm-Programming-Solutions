#include <bits/stdc++.h>

using namespace std;

typedef long long int lli;

vector <lli> v;
lli n, d, a, shift;

int main(){
  cin >> n >> d;
  a = n;
  while (a--) {
    lli number;
    cin >> number;
    v.push_back(number);
  }
  if (n == d)
    for (lli i = 0; i < v.size(); i++)
      cout << v[i] << " ";
  else if(n % d == 0){
    shift = n - d;
    for (lli i = shift; i < v.size(); i++)
      cout << v[i] << " ";
    for (lli i = 0; i < shift; i++)
      cout << v[i] << " ";
  }
  else if (n > d) {
    shift = d;
    for (lli i = shift; i < v.size(); i++)
      cout << v[i] << " ";
    for (lli i = 0; i < shift; i++)
      cout << v[i] << " "; 
  }
  else if (n < d) {
    shift = d % n;
    for (lli i = shift; i < v.size(); i++)
      cout << v[i] << " ";
    for(lli i = 0; i < shift; i++)
      cout << v[i] << " ";
  }
}

