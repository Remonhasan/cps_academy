/*
    author: remonhasan
    created: 19-07-2024

*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int A1, A2, B1, B2;
    cin >> A1 >> A2 >> B1 >> B2;

    int netExportA = A1 - A2;
    int netExportB = B1 - B2;

    int finalExport = (netExportA + netExportB) * -1;

    cout << (finalExport > 0 ? "YES" : "NO") << '\n';
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