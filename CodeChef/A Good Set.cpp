#include <bits/stdc++.h>

using namespace std;

inline void solve() {
	int n, i = 1;
	cin >> n;
	while (n--) {
		cout << i << " ";
		i += 2;
	}
	cout << '\n';
	return;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t;
	cin >> t;
	while (t--)
		solve();
}