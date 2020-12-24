#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string a, b;
	cin >> a >> b;
	for (int i = 0; i < a.length(); i++) if (a[i] != b[b.length() - i - 1]) {
			cout << "NO" << '\n';
			return 0;
		}
	
	cout << "YES" << '\n';
	return 0;
}