/**
 *    author:  remonhasan
 *    created: 31-08-2024
 **/
#include<bits/stdc++.h>
using namespace std;

void solve(int n)
{
    map < char, int > charCount;
    string s;
    int result = 0;
    while (n--) {
        cin >> s;
        charCount[s[0]]++;
    }

    for (const auto & e: charCount) {
        int p = e.second;
        int a = p / 2;
        int b = p - a;

        if (p % 2 == 0) {
            result += a * (a - 1);
        } else {
            result += (a * (a - 1) + b * (b - 1)) / 2;
        }
    }

    cout << result << '\n';
    charCount.clear();

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    while (cin >> n) {
        solve(n);
    }

    return 0;
}