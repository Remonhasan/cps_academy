/*
    author: remonhasan
    created: 19-07-2024

*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    ll n, k;
    cin >> n >> k;

    if (n >= k && (n - k) % 2 == 0) {
        // Possible to represent n as the sum of k odd numbers
        cout << "YES" << '\n';
        vector<ll> result(k, 1);
        result[k-1] = n - (k - 1);
        for (ll num : result) {
            cout << num << " ";
        }
        cout << endl;
    } else if (n >= 2 * k && (n - 2 * k) % 2 == 0) {
        // Possible to represent n as the sum of k even numbers
        cout << "YES" << '\n';
        vector<ll> result(k, 2);
        result[k-1] = n - 2 * (k - 1);
        for (ll num : result) {
            cout << num << " ";
        }
        cout << '\n';
    } else {
        cout << "NO" << endl;
    }
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