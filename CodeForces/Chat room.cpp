#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string valid = "hello", s;

	cin >> s;
	int j = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == valid[j])
			j++;
		if (j == 5) {
			cout << "YES" << '\n';
			return 0;
		}
	}
	cout << "NO" << '\n';
	return 0;
}