#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n, ans = 0;
	cin >> n;

	if (n < 51)
		ans = 100;
	else if (n < 101)
		ans = 50;
	cout << ans << '\n';

	return 0;
}