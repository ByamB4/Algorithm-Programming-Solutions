#include "bits/stdc++.h"

using namespace std;

inline void solve() {
	int n, x;
	cin >> n;
	vector <int> vi(101, 0);
	for (int i = 0; i < n; i++) {
		cin >> x;
		vi[x]++;
	}
	int imax = 0, ind = 0;
	for (int i = 1; i <= 100; i++)
		if (vi[i] > imax) {
			imax = vi[i];
			ind = i;
		}
	cout << n - imax << '\n';
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