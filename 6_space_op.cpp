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
  vector<int>next(n,0);

  if(a[n-1][n-1]=='*')cout<<0<<endl;
  else{
    next[n-1]=1;
    for(int i=n-1;i>=0;i--){
        vector<int>curr(n,0);
        for(int j=n-1;j>=0;j--){
            if(a[i][j]=='*'){curr[j]=0;continue;}
            int ans1 = 0;
            int ans2 = 0;
            if(j+1 < n)ans1 =curr[j+1];
            if(i+1 < n)ans2 = next[j];
            ans2 = next[j];
            curr[j]  = (ans1 + ans2 )%M;
        }
        next = curr;
    }
    cout<<next[0]<<endl;
  }
return 0;
}