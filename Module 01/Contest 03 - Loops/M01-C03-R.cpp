/**
 *    author:  remonhasan
 *    created: 13-09-2024
**/
#include<bits/stdc++.h>
using namespace std;

void solve()
{
  int X,Y,Z; 
  scanf("%d %d %d",&X,&Y,&Z);

  int totalStudent = X * Y;
  double passedPercent = (static_cast<double>(Z)/ totalStudent) * 100;

  cout << (passedPercent > 50.00 ? "YES" : "NO") << '\n';

}

int main() {
  ios_base::sync_with_stdio(false); 
  cin.tie(0); cout.tie(0);

  int t; 
  scanf("%d",&t);

  for(int cs=1; cs<=t; cs++){
    solve();
  }
  
  return 0;
}