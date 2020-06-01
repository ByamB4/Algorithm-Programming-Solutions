#include <bits/stdc++.h>

using namespace std;

inline void solve() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int ans = 0;
        for (int j = 0; j < 5; j++) {
            int tmp; cin >> tmp;
            if (tmp == 1) ans++;
        }
        if ( ans == 0)
            cout << "Beginner"<<"\n";
        else if ( ans == 1)
            cout << "Junior Developer"<<"\n";
        else if ( ans == 2)
            cout << "Middle Developer"<<"\n";
        else if ( ans == 3)
            cout << "Senior Developer"<<"\n";
        else if ( ans == 4)
            cout << "Hacker"<<"\n";
        else if ( ans == 5)
            cout << "Jeff Dean"<<"\n";
    }
}
int main() {
    solve();
}
