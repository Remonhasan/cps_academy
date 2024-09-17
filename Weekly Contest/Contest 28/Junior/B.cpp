/**
 *    author:  remonhasan
 *    created: 24-08-2024
 *    problem vjudge: https://vjudge.net/problem/CodeChef-TVDISC
 *    problem codechef: https://www.codechef.com/problems/TVDISC
 **/
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int A, B, C, D;
    scanf("%d%d%d%d", & A, & B, & C, & D);

    int final_A = A - C;
    int final_B = B - D;

    if (final_A < final_B) {
        cout << "First" << '\n';
    } else if (final_B < final_A) {
        cout << "Second" << '\n';
    } else {
        cout << "Any" << '\n';
    }

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