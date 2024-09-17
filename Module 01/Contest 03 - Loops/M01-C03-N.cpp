/**
 *    author:  remonhasan
 *    created: 13-09-2024
**/
#include<bits/stdc++.h>
using namespace std;

void solve()
{
  int X,N; 
  scanf("%d%d",&X,&N);

  int dailyCarry = X * 100;
  int extraPass = N - dailyCarry;

  if( dailyCarry > N) cout << 0 << '\n';
  else{
  	cout << ceil(extraPass / 100.00) << '\n';
  } 
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