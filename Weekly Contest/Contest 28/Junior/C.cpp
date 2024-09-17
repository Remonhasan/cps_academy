/**
 *    author:  remonhasan
 *    created: 24-08-2024
 *    problem vjudge: https://vjudge.net/problem/CodeChef-DOMINANT2
 *    problem codechef: https://www.codechef.com/problems/DOMINANT2
 **/
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    scanf("%d", & n);

    vector < int > a(n);
    for (int i = 0; i < n; i++) scanf("%d", & a[i]);

    unordered_map < int, int > freq;
    for (int i: a) {
        freq[i]++;
    }

    int maxFreq = 0;
    int maxCount = 0;

    bool isOk = false;
    for (auto & pair: freq) {
        if (pair.second > maxFreq) {
            maxFreq = pair.second;
            maxCount = 1;
        } else if (pair.second == maxFreq) {
            maxCount++;
        }
    }

    cout << (maxCount == 1 ? "YES" : "NO") << '\n';

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    scanf("%d", & t);

    for (int cs = 1; cs <= t; cs++) {
        solve();
    }

    return 0;
}