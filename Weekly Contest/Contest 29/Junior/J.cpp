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

    int result = 0;
    while (n--) {
        int x;
        cin >> x;
        result = result | x;
    }

    cout << result << endl;

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