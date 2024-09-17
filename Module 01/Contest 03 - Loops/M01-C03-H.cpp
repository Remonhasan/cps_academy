/**
 *    author:  remonhasan
 *    created: 13-09-2024
**/
#include<bits/stdc++.h>
using namespace std;

void solve()
{
  int N; 
  scanf("%d",&N);

  cout << (N % 3 == 0 ? "YES" : "NO") << '\n';
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