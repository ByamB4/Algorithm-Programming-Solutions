#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;
    if (k <= (n + 1) / 2)
        cout << k * 2 - 1 << '\n';
    else
        cout << (k - (n + 1) / 2) * 2 << '\n';
    return 0;
}