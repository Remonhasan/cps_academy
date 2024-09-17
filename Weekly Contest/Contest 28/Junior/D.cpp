/**
 *    author:  remonhasan
 *    created: 24-08-2024
 *    problem vjudge: https://vjudge.net/problem/AtCoder-abc301_a
 *    problem Atcoder: https://atcoder.jp/contests/abc301/tasks/abc301_a?lang=en
 **/
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int N;
    cin >> N;
    string s;
    cin >> s;

    int tCount = 0, aCount = 0;
    for (int i = 0; i < N; i++) {
        if (s[i] == 'A') aCount++;
        else if (s[i] == 'T') tCount++;
    }

    if (tCount > aCount) cout << 'T' << endl;
    else if (tCount < aCount) cout << 'A' << endl;
    else cout << char('T' + 'A' - s.back()) << endl;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}