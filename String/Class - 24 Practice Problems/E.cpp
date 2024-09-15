/*
    author  : remonhasan
    created : 15-09-2024
    problem : https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/E
*/
#include <bits/stdc++.h>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    int sum = 0;
    for (char c: s) {
        sum += c - '0'; // Convert character to integer and add to sum
    }

    cout << sum << '\n';

    return 0;
}