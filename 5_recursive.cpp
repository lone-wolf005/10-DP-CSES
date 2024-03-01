//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
const int M = 1e9+7;
#define ll long long int
const int N = 1e6+7;
vector<int>dp(N,1e7);
int solve(int n){
    if(dp[n]!=1e7){
        return dp[n];
    }
    string s = to_string(n);
    int ans = INT_MAX;
    for(auto x:s){
        int digit = x -'0';
        if(digit!=0)ans = min(1+solve(n-digit),ans);
    }
    return dp[n]=ans;
}
int main(){
    int n;
    cin>>n;
    dp[0]=0;
    cout<<solve(n)<<endl;
    // cout<<dp[n]<<endl;

return 0;
}