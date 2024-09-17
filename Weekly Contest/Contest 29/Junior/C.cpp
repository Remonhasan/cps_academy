/**
 *    author:  remonhasan
 *    created: 31-08-2024
 **/

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int x, y;
    cin >> x >> y;

    float ans = abs(x - y) / 2.0;
    cout << ceil(ans) << '\n';

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