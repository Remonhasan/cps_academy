/**
 *    author:  remonhasan
 *    created: 16-09-2024
**/
#include<bits/stdc++.h>
using namespace std;

int solve(int k)
{
  int count = 0, N = 1;
  while(count < k){
  	if(N % 3 !=0 && N % 10 != 3){
  		count++;
  	}
  	if(count < k){
  		N++;
  	}
  }

  return N;
}

int main() {
  ios_base::sync_with_stdio(false); 
  cin.tie(0); cout.tie(0);

  int t; 
  scanf("%d",&t);

  for(int cs=1; cs<=t; cs++){
  	int k;
  	cin >> k;
    cout << solve(k) << '\n';
  }
  
  return 0;
}