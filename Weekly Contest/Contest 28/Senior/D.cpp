/**
 *    author:  remonhasan
 *    created: 31-08-2024
 **/
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, a, x, b, y;
    cin >> n >> a >> x >> b >> y;

    a--;
    x--;
    b--;
    y--;

    while (true) {
        if (a == b) {
            cout << "YES" << endl;
            return 0;
        }

        if (a == x) {
            break;
        }
        a = (a + 1) % n;

        if (b == y) {
            break;
        }
        b = (b - 1 + n) % n;

        if (a == b) {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;

    return 0;
}