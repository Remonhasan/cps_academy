/*
    author: remonhasan
    created: 19-07-2024

*/

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int N, X;
    cin >> N >> X;

    int totalPlayers = 2 * N;
    int unratedPlayers = totalPlayers - X;
    int ratedVsRated = max(0, X - unratedPlayers);

    cout << ratedVsRated << '\n';
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
