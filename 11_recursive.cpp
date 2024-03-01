//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
const int M = 1e9+7;
#define ll long long int
int solve(int i,int j,vector<vector<int>>&dp){
    if(i==j){
        return dp[i][j]=0;
    }
    if(dp[i][j]!=1e9)return dp[i][j];
    int ans = INT_MAX;
    for(int k = 1;k<=(j-1);k++){
         ans = min(ans,(solve(i,k,dp)+solve(i,j-k,dp)+1));
    }
    for(int k = 1;k<=(i-1);k++){
        ans = min(ans,(solve(k,j,dp)+solve(i-k,j,dp)+1));
    }
    return dp[i][j]=ans;

}
int main(){
  int a,b;
  cin>>a>>b;
  
 vector<vector<int>>dp(a+1,vector<int>(b+1,1e9));

cout<<solve(a,b,dp);
//  for(auto x:dp){
//     for(auto y:x)cout<<y<<" ";
//     cout<<endl;
//  }
return 0;
}