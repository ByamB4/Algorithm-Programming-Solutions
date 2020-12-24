#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	long long int n;
	int ans = 0;
	
	cin >> n;

	while (n) {
		ans += (n % 10 == 7 || n % 10 == 4);
		n /= 10;
	}
	if (ans == 7 || ans == 4)
		cout << "YES" << '\n';
	else
		cout << "NO" << '\n';


	return 0;
}