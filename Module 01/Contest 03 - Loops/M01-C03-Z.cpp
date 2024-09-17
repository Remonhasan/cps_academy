/*
    author: remonhasan
    created: 19-07-2024

*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    vector<int> dice(6);
    for (int i = 0; i < 6; i++) {
        cin >> dice[i];
    }

    // Divide into Alice's and Bob's dice rolls
    vector<int> alice(dice.begin(), dice.begin() + 3);
    vector<int> bob(dice.begin() + 3, dice.end());

    // Sort dice rolls in descending order
    sort(alice.rbegin(), alice.rend());
    sort(bob.rbegin(), bob.rend());

    // Convert dice rolls to scores (formed by concatenation of the three dice)
    int aliceScore = alice[0] * 100 + alice[1] * 10 + alice[2];
    int bobScore = bob[0] * 100 + bob[1] * 10 + bob[2];

    // Compare scores and output result
    if (aliceScore > bobScore) {
        cout << "Alice" << '\n';
    } else if (bobScore > aliceScore) {
        cout << "Bob" << '\n';
    } else {
        cout << "Tie" << '\n';
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
