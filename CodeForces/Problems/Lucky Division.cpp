#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	int arr[] = {4, 7, 44, 47, 77, 444, 447, 474, 477, 774, 747, 777};
	cin >> n;

	for (int i = 0; i < 12; i++) {
		if (n % arr[i] == 0) {
			cout << "YES" << '\n';
			return 0;
		}
	}
	while (n > 0) {
		if (n % 10 != 4 && n % 10 != 7) {
			cout << "NO" << '\n';
			return 0;
		}
		n /= 10;
	}
	cout << "YES" << '\n';
	return 0;
}