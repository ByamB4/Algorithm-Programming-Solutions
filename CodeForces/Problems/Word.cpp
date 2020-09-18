#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int low = 0, up = 0;
	string n, a, b;
  cin >> n;

  for (int i = 0; i < n.length(); i++) {
      char th = n[i];
      if (th >= 'a' && th <= 'z')
      	low++, a += th, b += (th - 32);
      else if (th >= 'A' && th <= 'Z')
      	up++, b += th, a += (th + 32);
  }
  if (up <= low)
  	cout << a << '\n';
 	else
 		cout << b << '\n';
  
  return 0;
}