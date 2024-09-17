/*
    author: remonhasan
    created: 19-07-2024

*/
#include<bits/stdc++.h>
using namespace std;

string checkHattrick(const vector < char > & ball) {
    int count = 0;

    for (char ch: ball) {
        if (ch == 'W') {
            count++;

            if (count == 3) {
                return "YES";
            }
        } else {
            count = 0;
        }
    }

    return "NO";
}

int main() {

    int t;
    cin >> t;
    while (t--) {
        vector < char > ball(6, 0);
        for (int i = 0; i < 6; i++) cin >> ball[i];
        string result = checkHattrick(ball);
        cout << result << '\n';
    }

    return 0;
}