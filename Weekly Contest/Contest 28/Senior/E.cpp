/**
 *    author:  remonhasan
 *    created: 31-08-2024
 **/
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector < int > a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int max_size = max_element(a.begin(), a.end()) - a.begin();
    bool isMountain = true;

    for (int i = max_size; i < n - 1; i++) {
        isMountain &= a[i] > a[i + 1];
    }

    for (int i = 0; i < max_size; i++) {
        isMountain &= a[i] < a[i + 1];
    }


    cout << (isMountain ? "YES" : "NO") << '\n';

    return 0;
}