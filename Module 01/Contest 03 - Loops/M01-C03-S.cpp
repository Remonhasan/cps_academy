/*
    author: remonhasan
    created: 19-07-2024

*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n;
    cin >> n;

    vector<int> roundNumbers;

    int placeValue = 1;
    while (n > 0) {
        int currentDigit = n % 10;
        if (currentDigit != 0) {
            roundNumbers.push_back(currentDigit * placeValue);
        }
        n /= 10;
        placeValue *= 10;
    }

    cout << roundNumbers.size() << endl;
    for (int num : roundNumbers) {
        cout << num << " ";
    }
    cout << endl;
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