/**
 *    author:  remonhasan
 *    created: 13-09-2024
**/
#include<bits/stdc++.h>
using namespace std;

void solve()
{
  int N,X; 
  scanf("%d%d",&N,&X);

  vector<int> a(N);
  for(int i=0; i<N; i++) scanf("%d", &a[i]);

  vector<int>ans;
  for(int i=0;i<N;i++){
  	if(a[i] <= X) ans.push_back(a[i]);
  }

  int sum = accumulate(ans.begin(),ans.end(),0);

  cout << sum << '\n';

}

int main() {
  ios_base::sync_with_stdio(false); 
  cin.tie(0); cout.tie(0);

  solve();
  
  return 0;
}