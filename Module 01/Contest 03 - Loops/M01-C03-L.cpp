/**
 *    author:  remonhasan
 *    created: 13-09-2024
**/
#include<bits/stdc++.h>
using namespace std;

void solve()
{
  int R; 
  scanf("%d",&R);

  if(R <= 1399) cout << "Division 4" << '\n';
  else if(R >= 1400 && R <= 1599) cout << "Division 3" << '\n';
  else if( R >= 1600 && R <= 1899) cout << "Division 2" << '\n';
  else cout << "Division 1" << '\n';

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