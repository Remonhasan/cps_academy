/**
 *    author:  remonhasan
 *    created: 24-08-2024
 *    problem vjudge: https://vjudge.net/problem/CodeChef-POPULATION
 *    problem codechef: https://www.codechef.com/problems/POPULATION
**/
#include<bits/stdc++.h>
using namespace std;

void solve()
{
  int x,y,z; 
  scanf("%d%d%d",&x,&y,&z);

  cout << x - y + z << '\n';

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