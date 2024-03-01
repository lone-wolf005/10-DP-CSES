//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
const int M = 1e9+7;
#define ll long long int
int solve(int n,int m,vector<vector<int>&dp,string &a,string &b){
    if(n==0){
        return dp[n][m]=m;
    }
    else if(m==0){
        return dp[n][m]=n;
    }
    if(dp[n][m]!=1e6)return dp[n][m];
    for(int i = 1;i<=m;i++){
        if(a[n-1]==b[m-1]){
            retu
        }
    }
}
int main(){
string a;cin>>a;
string b;cin>>b;
int n = a.length();
int m = b.length();
vector<vector<int>>dp(n+1,vector<int>(m+1,1e6));
int n = solve(n,m,dp,a,b);
return 0;
}