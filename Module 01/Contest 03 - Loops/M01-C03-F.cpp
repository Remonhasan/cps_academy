/**
 *    author:  remonhasan
 *    created: 16-09-2024
 **/
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    scanf("%d", & n);

    char fixed = 'o';
    string s(n, fixed); // generate n times 'o'
    cout << 'L' << s << "ng" << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}