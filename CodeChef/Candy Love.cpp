#include <bits/stdc++.h>

using namespace std;

inline void solve() {
	int n, s = 0;
	cin >> n;
	while (n--) {
		int tmp;
		cin >> tmp;
		s += tmp;
	}
	if (s % 2)
		cout << "YES" << '\n';
	else 
		cout << "NO" << '\n';
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t;

	cin >> t;
	while (t--)
		solve();
}