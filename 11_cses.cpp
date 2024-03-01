//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
const int M = 1e9+7;
#define ll long long int
int main(){
  int a,b;
  cin>>a>>b;
  
  vector<vector<int>>dp(a+1,vector<int>(b+1,1e9));

  for(int i=1;i<=a;i++){
    for(int j=1;j<=b;j++){
        if(i==j){dp[i][j]=0;continue;}
        
        for(int k=1;k<=(j-1);k++){
            dp[i][j] = min(dp[i][j], (dp[i][k]+dp[i][j-k]+1));
        }
        for(int k=1;k<=(i-1);k++){
            dp[i][j] = min(dp[i][j],(dp[k][j]+dp[i-k][j]+1));
        }
    }
  }
  cout<<dp[a][b]<<endl;
return 0;
}