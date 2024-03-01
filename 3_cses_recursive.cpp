//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int MOD = 1e9+7;
const int N = 10e6+5;
vector<int>dp(N);
int no_of_coins(int x,vector<int>&v1,int n){
    if(x==0)return dp[0];
    if(dp[x]!=0)return dp[x];
    else {
        for(int i=0;i<n;i++){
            if(x>=v1[i])
            dp[x]= (dp[x] + no_of_coins(x-v1[i],v1,n))%MOD; 
    }
    }
      dp[x]%=MOD;
      return dp[x];
}
int main(){
int n,x;
cin>>n>>x;
vector<int>v1(n);
for(int i=0;i<n;i++)cin>>v1[i];
dp[0]=1;
for (int  i = 1; i < n+1; i++)
{
    dp[i]=0;
}

int ans = no_of_coins(x,v1,n);
cout<<ans<<endl;
return 0;
}