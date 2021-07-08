#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, q;
	cin >> n >> q;
	long long int a[n], t;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a + n);
	while (q--) {
		cin >> t;
		if (a[0] <= t && a[n - 1] >= t)
			cout << "Yes" << '\n';
		else
			cout << "No" << '\n';
	}
	return 0;
}