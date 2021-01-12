#include "bits/stdc++.h"

using namespace std;

inline void solve() {
	int x1, x2, x3, v1, v2;

	cin >> x1 >> x2 >> x3 >> v1 >> v2;

	long double s1 = abs(1.0 * (x3 - x1) / v1);
	long double s2 = abs(1.0 * (x3 - x2) / v2);
	
	if (s1 < s2) cout << "Chef\n";
	else if (s1 > s2) cout << "Kefa\n";
	else cout << "Draw\n";
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