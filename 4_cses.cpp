//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
const int M = 1e9+7; 
#define ll long long int
int main(){
    ll n,x;
    cin>>n>>x;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    vector<vector<int>>dp(n+1,vector<int>(x+1));
    for(int i=0;i<n;i++){
        dp[i][0]=1;
    }

    for(int i=n-1;i>=0;i--){
        for(int sum =1;sum<=x;sum++){
            int skip = dp[i+1][sum];
            int pick = 0;
            if(sum>=a[i]){
                pick = dp[i][sum-a[i]];
            }
            dp[i][sum] = (pick + skip)%M;
        }
    
    }
    cout<<dp[0][x]<<endl;

return 0;
}