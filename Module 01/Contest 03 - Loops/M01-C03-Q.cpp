/*
    author: remonhasan
    created: 19-07-2024

*/
#include<bits/stdc++.h>
using namespace std;

void solve() {
    int N, K;
    cin >> N >> K;

    double eachPerson = N / (K + 1);
    int otherShare = floor(eachPerson * K);
    cout << N - otherShare << '\n';
}

int main() {

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}