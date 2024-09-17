/*
    author: remonhasan
    created: 19-07-2024

*/
#include <bits/stdc++.h>
#include <numeric>

using namespace std;

void solve() {
    int N, K, M;
    cin >> N >> K >> M;

    vector < int > score(N - 1);
    for (int i = 0; i < N - 1; i++) cin >> score[i];

    int sum = accumulate(score.begin(), score.end(), 0);
    int ans = (M * N) - sum;

    if (ans > K) {
        cout << -1 << endl;
    } else if (ans < 0) {
        cout << 0 << endl;
    } else {
        cout << ans << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}