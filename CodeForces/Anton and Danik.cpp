#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int a = 0, b = 0;
	string s;

	cin >> s >> s;
	for (int i = 0; i < s.length(); i++) {
		a += (s[i] == 'D');
		b += (s[i] == 'A');
	}
	if (a == b)
		cout << "Friendship" << '\n';
	else if (a > b)
		cout << "Danik" << '\n';
	else
		cout << "Anton" << '\n';

	return 0;
}