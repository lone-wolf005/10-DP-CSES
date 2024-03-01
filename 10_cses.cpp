//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
const int M = 1e9+7;
#define ll long long int
int main(){
string a;cin>>a;
string b;cin>>b;
int n = a.length();
int m = b.length();
vector<vector<int>>dp(n+1,vector<int>(m+1,1e6));

for(int i=0;i<n;i++){
    dp[i][0]=i;
}
for(int i=0;i<m;i++){
    dp[0][i]=i;
}

for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
        if(a[i-1]==b[j-1]){
            dp[i][j]=dp[i-1][j-1];
        }
        else{
            dp[i][j] = 1 + dp[i-1][j-1];
            dp[i][j] = min(dp[i][j],1+dp[i][j-1]);
            dp[i][j] = min(dp[i][j],1+dp[i-1][j]);
        }
    }
}
cout<<dp[n][m]<<endl;

return 0;
}