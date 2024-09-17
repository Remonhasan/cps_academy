/*
    author: remonhasan
    created: 19-07-2024

*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int N, X, D;
    cin >> N >> X >> D;

    float totalNeedPerDay = 5 * X;
    float daysCanSurvive = floor(N / totalNeedPerDay);

    cout << D + daysCanSurvive << '\n';
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