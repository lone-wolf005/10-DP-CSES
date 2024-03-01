//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int MOD = 1000000000+7;
int main(){
ll n,x;
cin>>n>>x;
vector<ll>v1(n);
for(int i=0;i<n;i++)cin>>v1[i];
vector<int>dp(x+1,0);
dp[0]=1;
for(int i=1;i<=x;i++){
    for(int j=0;j<n;j++){
        if(v1[j]<=i){
            dp[i]= (dp[i]+dp[i-v1[j]])%MOD;
        }
    }
}
cout<<dp[x]<<endl;
return 0;
}