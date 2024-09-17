/*
    author: remonhasan
    created: 19-07-2024

*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int X;
    cin >> X;

    float c = (20 * X) / 100.00;

    cout << ceil(100.00 / c) << '\n';
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