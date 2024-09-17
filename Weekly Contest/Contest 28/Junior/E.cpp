/**
 *    author:  remonhasan
 *    created: 24-08-2024
 *    problem vjudge: https://vjudge.net/problem/AtCoder-abc301_b
 *    problem Atcoder: https://atcoder.jp/contests/abc301/tasks/abc301_b?lang=en
 **/
#include <bits/stdc++.h>
using namespace std;

using int32 = int32_t;
using int64 = int64_t;

int32 main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int32 N;
    cin >> N;

    vector < int32 > A(N);
    for (int32 i = 0; i < N; ++i)
    {
        cin >> A[i];
    }

    cout << A[0];
    
    for (int32 i = 1; i < N; ++i)
    {
        if (A[i - 1] < A[i])
        {
            for (int32 j = A[i - 1] + 1; j < A[i]; ++j)
            {
                cout << " " << j;
            }
        }
        else
        {
            for (int32 j = A[i - 1] - 1; j > A[i]; --j)
            {
                cout << " " << j;
            }
        }
        cout << " " << A[i];
    }
    
    cout << "\n";
    
    return 0;
}