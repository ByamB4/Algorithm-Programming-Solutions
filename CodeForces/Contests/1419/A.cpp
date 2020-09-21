#include <bits/stdc++.h>

using namespace std;

inline void solve() {
	int n, a = 0, b = 0;
	cin >> n >> n;
	while (n > 0) {
		a += (n % 10 % 2 == 0);
		b += (n % 10 % 2 == 1);
		n /= 10;
	}
	cout << a << " " << b << '\n';
	if (a > b)
		cout << "2" << '\n';
	else
		cout << "1" << '\n';
	return;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t;
	cin >> t;

	while (t--)
		solve();

	return 0;
}