//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int N = 1e6+7;
vector<int>dp(N);

int coins(int x,vector<int>&v1,int n){
    if(x==0)return dp[0];
    if(dp[x]!=1e7)return dp[x];
    else{
        for(int i =0;i<n;i++){
            if(x>=v1[i]){
                dp[x]=min(dp[x],1+coins(x-v1[i],v1,n));
            }
        }
        return dp[x];
    }
}
int main(){
  int n,x;
  cin>>n>>x;
  vector<int>v1(n);
  for(int i =0;i<n;i++)cin>>v1[i];
  dp[0]=0;
  for(int i=1;i<=x;i++)dp[i]=1e7;
  int y = coins(x,v1,n);
  if(y==1e7)cout<<-1<<endl;
  else cout<<y<<endl;

return 0;
}