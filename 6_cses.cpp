//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
const int M = 1e9+7;
#define ll long long int
int main(){
  int n;
  cin>>n;
  vector<vector<char>>a(n,vector<char>(n));
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>a[i][j];
    }
  }
  vector<vector<int>>dp(n,vector<int>(n));

  if(a[n-1][n-1]=='*')cout<<0<<endl;
  else{
    dp[n-1][n-1]=1;
    for(int i=n-1;i>=0;i--){
        for(int j=n-1;j>=0;j--){
            if(i== n-1 && j== n-1)continue;
            if(a[i][j]=='*'){dp[i][j]=0;continue;}
            int ans1 = 0;
            int ans2 = 0;
            if(i+1 < n)ans1=dp[i+1][j];
            if(j+1 < n)ans2 =dp[i][j+1];
            dp[i][j]= (ans1 + ans2) %M;
        }
    }
    cout<<dp[0][0]<<endl;
  }
return 0;
}