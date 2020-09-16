#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, imax = -1, tot = 0;
	cin >> n;
	
	while (n--) {
		int a, b;
		cin >> a >> b;
		tot = tot - a + b;
		imax = max(imax, tot);
	}

	cout << imax << '\n';
}