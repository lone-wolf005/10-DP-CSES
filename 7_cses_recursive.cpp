//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
const int M = 1e9+7;
#define ll long long int
const int N = 1000;
const int X = 1e6;
// vector<vector<int>>dp(N,vector<int>(X));

int solve(int i,int j,vector<int>&w,vector<int>&v,vector<vector<int>>&dp){
    if(i==0){
        return dp[i][j];
    }
    if(dp[i][j]!=-1)return dp[i][j];
    int skip = solve(i-1,j,w,v,dp);
    int curr = 0;
    if(j>=w[i-1]){
        curr = v[i-1] + solve(i-1,j-w[i-1],w,v,dp);
    }
    int ans = max(curr,skip);
    return dp[i][j] = ans;
}

int main(){
  int n,x;
    cin>>n>>x;
    vector<int>w(n);
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>w[i];
    }
    for(int j=0;j<n;j++){
        cin>>v[j];
    }
    vector<vector<int>>dp(n+1,vector<int>(x+1,0));
    for(int i=1;i<=n;i++){
        for(int j=0;j<=x;j++){
            dp[i][j]=-1;
        }
    }
    solve(n,x,w,v,dp);
    cout<<dp[n][x]<<endl;

return 0;
}