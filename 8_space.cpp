//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
const int M = 1e9+7;
#define ll long long int
bool isValid(int j,int m){
    if(j>=1 && j<=m)return true;
    return false;
}
int main(){
  int n,m;
  cin>>n>>m;
  vector<int>v1(n);
  for(int i=0;i<n;i++){
    cin>>v1[i];
  }
//   vector<vector<int>>dp(n+1,vector<int>(m+1));
 vector<int>pre(m+1,0);
  for(int i=1;i<=m;i++){
    if(v1[0]==i || v1[0]==0){
        pre[i]=1;
    }
  }
  for(int i=2;i<=n;i++){
    vector<int>curr(m+1);
    for(int j=1;j<=m;j++){
        if(v1[i-1]!=0 && v1[i-1]!=j){
            curr[j]=0;
            continue;
        }
        for(int prev = j-1;prev<=j+1;prev++){
            if(!isValid(prev,m)){
                continue;
            }
            else{
                curr[j] = (pre[prev]+curr[j])%M;
            }
        }
    }
    pre = curr;
  }
  int ans = 0;
  for(int i=1;i<=m;i++){
    ans = (ans + pre[i])%M;
  }
  cout<<ans<<endl;
return 0;
}