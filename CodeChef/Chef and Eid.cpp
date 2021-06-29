#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		long long int n, d;
		cin >> n;
		long long int a[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];
		sort(a, a + n);
		d = a[1] - a[0];
		for (int i = 1; i < n; i++) {
			if (a[i] - a[i - 1] < d) {
				d = a[i] - a[i - 1];
			}
		}
		cout << d << '\n';
	}
}