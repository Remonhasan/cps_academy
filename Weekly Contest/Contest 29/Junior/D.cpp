/**
 *    author:  remonhasan
 *    created: 31-08-2024
 **/
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll A, B;
    cin >> A >> B;

    ll result = (A + B - 1) / B;
    cout << result << '\n';

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}