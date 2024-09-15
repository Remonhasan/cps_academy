/*
    author  : remonhasan
    created : 15-09-2024
    problem : https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/J
*/
#include <bits/stdc++.h>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    
    // Vector to store the count of each letter (26 letters in total)
    vector<int>count(26,0);
    
    // Count the occurrences of each letter
    for (char c: s) {
        count[c - 'a']++;
    }
    
    // Print the counts in alphabetical order
    for(int i=0;i<26;i++){
        if(count[i] > 0){
            char letter = 'a' + i;
            cout << letter << " : " << count[i] << '\n';
        }
    }

    return 0;
}