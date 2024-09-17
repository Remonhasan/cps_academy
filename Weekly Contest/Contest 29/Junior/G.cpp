/**
 *    author:  remonhasan
 *    created: 31-08-2024
 **/
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector < int > a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    unordered_map < int, int > ocr;

    for (int i = 0; i < n; ++i) {
        ocr[a[i]] = i;
    }

    vector < int > ans;

    for (int i = 0; i < n; ++i) {
        if (ocr[a[i]] == i) {
            ans.push_back(a[i]);
        }
    }

    cout << ans.size() << '\n';
    for (int i = 0; i < ans.size(); ++i) {
        cout << ans[i] << " ";
    }
    cout << '\n';

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}