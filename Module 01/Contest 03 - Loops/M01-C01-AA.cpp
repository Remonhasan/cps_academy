/*
    author: remonhasan
    created: 19-07-2024

*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int N;
    cin >> N;

    if (N == 1) cout << "YES" << '\n';
    else {
        if (N % 2 == 0 && N > 1) cout << "YES" << '\n';
        else cout << "NO" << '\n';
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