/*
    author  : remonhasan
    created : 15-09-2024
    problem : https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/F
*/
#include <bits/stdc++.h>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string s;
        getline(cin, s);

        if (s.length() > 10) {
            cout << s[0] << s.length() - 2 << s[s.length() - 1] << '\n';
        } else {
            cout << s << '\n';
        }

    }
}