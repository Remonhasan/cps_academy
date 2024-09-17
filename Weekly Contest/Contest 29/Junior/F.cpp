/**
 *    author:  remonhasan
 *    created: 31-08-2024
 **/
#include<bits/stdc++.h>
#include <algorithm>
using namespace std;

bool isDiffers(const string & s1,
    const string & s2) {
    int count = 0;
    for (int i = 0; i < s1.size(); ++i) {
        if (s1[i] != s2[i]) {
            ++count;
            if (count > 1) return false;
        }
    }
    return count == 1;
}

bool isValid(const vector < string > & p) {
    for (size_t i = 0; i < p.size() - 1; ++i) {
        if (!isDiffers(p[i], p[i + 1])) {
            return false;
        }
    }
    return true;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;

    vector < string > s(n);
    for (int i = 0; i < n; i++) cin >> s[i];

    vector < int > inds(n);
    for (int i = 0; i < n; i++) inds[i] = i;

    do {
        vector < string > p(n);
        for (int i = 0; i < n; i++) {
            p[i] = s[inds[i]];
        }
        if (isValid(p)) {
            cout << "Yes" << '\n';
            return 0;
        }
    } while (next_permutation(inds.begin(), inds.end()));

    cout << "No" << '\n';

    return 0;
}