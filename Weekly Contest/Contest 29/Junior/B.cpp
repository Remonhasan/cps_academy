/**
 *    author:  remonhasan
 *    created: 31-08-2024
 **/
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << (max(a, c) <= b ? "Yes" : "No") << '\n';

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    for (int cs = 1; cs <= t; cs++) {
        solve();
    }

    return 0;
}