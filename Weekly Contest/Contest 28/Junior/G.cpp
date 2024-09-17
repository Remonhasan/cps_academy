/**
 *    author:  remonhasan
 *    created: 24-08-2024
 *    problem vjudge: https://vjudge.net/problem/CodeForces-977A
 *    problem Codeforces: https://codeforces.com/problemset/problem/977/A
 **/
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    scanf("%d %d", & n, & k);

    for (int i = 1; i <= k; i++) {
        int last_digit = n % 10;
        if (last_digit != 0) n--;
        else n /= 10;
    }

    cout << n << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}