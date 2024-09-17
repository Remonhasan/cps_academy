/**
 *    author:  remonhasan
 *    created: 31-08-2024
 **/
#include<bits/stdc++.h>
#include <algorithm>
#include <cstdio>

using namespace std;
#define ll long long

int main() {
    ll num, m, tc;

    scanf("%lld %lld", & num, & m);
    scanf("%lld", & tc);

    vector < ll > arr(num + 1);

    for (ll i = 1; i <= num; ++i) {
        scanf("%lld", & arr[i]);
    }

    for (ll i = 1; i <= num; ++i) {
        bool isOk = true;

        for (ll j = max(i - m, 1 LL); j < i; ++j) {
            if (arr[j] <= arr[i]) {
                isOk = false;
                break;
            }
        }

        for (ll j = i + 1; j <= min(i + tc, num); ++j) {
            if (arr[j] <= arr[i]) {
                isOk = false;
                break;
            }
        }

        if (isOk) {
            cout << i << endl;
            return 0;
        }
    }

    return 0;
}