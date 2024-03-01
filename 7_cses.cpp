//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
const int M = 1e9+7;
#define ll long long int
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
        for(int j=1;j<=x;j++){
            int weight = w[i-1];
            int value = v[i-1];
            int skip = dp[i-1][j];
            int take = 0;
            if(j>=weight){
                take = value + dp[i-1][j-weight];
            }
            dp[i][j]=max(take,skip);
        }
    }
    cout<<dp[n][x]<<endl;

return 0;
}