/**
 *    author:  remonhasan
 *    created: 31-08-2024
 **/
#include<bits/stdc++.h>
#include <iomanip>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    vector < double > a(n), b(m), c(n);

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        c[i] = a[i];
        if (i > 0) {
            c[i] += c[i - 1];
        }
    }

    for (int i = 0; i < m; i++) cin >> b[i];

    for (int i = 0; i < m; i++) {
        bool isFound = false;
        double q = b[i];
        int l = 0, h = n - 1;

        while (l <= h) {
            int mid = l + (h - l) / 2;
            if (q > c[mid]) {
                l = mid + 1;
            } else if (q < c[mid] && (mid == 0 || q > c[mid - 1])) {
                cout << mid + 1 << " " << fixed << setprecision(0) << (q - (mid > 0 ? c[mid - 1] : 0)) << '\n';
                isFound = true;
                break;
            } else if (q == c[mid]) {
                cout << mid + 1 << " " << fixed << setprecision(0) << (q - (mid > 0 ? c[mid - 1] : 0)) << '\n';
                isFound = true;
                break;
            } else if (q < c[mid] && (mid == 0 || q <= c[mid - 1])) {
                h = mid - 1;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}