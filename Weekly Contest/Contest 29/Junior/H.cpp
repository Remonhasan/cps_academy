/**
 *    author:  remonhasan
 *    created: 31-08-2024
 **/
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, count = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'x' && s[i + 1] == 'x' && s[i + 2] == 'x') count++;
    }

    cout << count << '\n';

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}