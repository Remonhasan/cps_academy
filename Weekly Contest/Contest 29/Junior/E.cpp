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

    int h, w;
    cin >> h >> w;

    vector < string > s(h);
    for (int i = 0; i < h; i++) cin >> s[i];
    
    string given = "snuke";
    
    vector<int> dis_i = {-1, -1, 0, 1, 1, 1, 0, -1};
    vector<int> dis_j = {0, 1, 1, 1, 0, -1, -1, -1};

    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            for(int k=0;k<8;k++){
                bool isPossible = true;
                for(int l=0;l<5;l++){
                    int fist_i = i + dis_i[k] * l;
                    int first_j = j + dis_j[k] * l;
                    if(fist_i < 0 || h <= fist_i || first_j < 0 || w <= first_j){
                        isPossible = false;
                        break;
                    }
                    if(s[fist_i][first_j] != given[l]){
                        isPossible = false;
                        break;
                    }
                }
                if(isPossible){
                    for(int l=0;l<5;l++){
                        cout << i + dis_i[k] * l + 1 << " " << j + dis_j[k] * l + 1 << endl;
                    }
                    return 0;
                }
            }
        }
    }

    return 0;
}