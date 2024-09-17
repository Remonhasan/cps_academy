/*
    author: remonhasan
    created: 19-07-2024
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
int T, G, M, A, B;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> T >> G >> M;

    while (T--) {
        if (A == G) {
            A = 0;
        }
        else if (B == 0) {
            B = M;
        }
        else {
            int K = min(B, G - A);
            B -= K;
            A += K;
        }
    }

    cout << A << " " << B << '\n';

    return 0;
}