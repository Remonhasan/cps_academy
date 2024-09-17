/**
 *    author:  remonhasan
 *    created: 31-08-2024
 **/
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector < int > a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    cout << 1 << " " << n << '\n';

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