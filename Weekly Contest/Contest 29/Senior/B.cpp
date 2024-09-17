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
    string s;
    cin >> s;

    bool isOk = (n % 3 != 2);
    if (n % 3 != 2) {
        for (int i = 0; i < n / 3; i++) {
            if (s[i * 3 + 1] != s[i * 3 + 2]) {
                isOk = false;
                break;
            }
        }
    }

    cout << (isOk ? "YES" : "NO") << '\n';

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