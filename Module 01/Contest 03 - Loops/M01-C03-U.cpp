/*
    author: remonhasan
    created: 19-07-2024

*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int X, Y;
    cin >> X >> Y;

    float totalPerson = X / Y;
    if (totalPerson >= 20.00) {
        cout << 20 << '\n';
    } else {
        cout << floor(totalPerson) << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}