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
    // vector<vector<int>>dp(n+1,vector<int>(x+1,0));
    vector<int>pre(x+1,0);

    for(int i=1;i<=n;i++){
        vector<int>curr(x+1,0);
        for(int j=1;j<=x;j++){
            int weight = w[i-1];
            int value = v[i-1];
            int skip = pre[j];
            int take = 0;
            if(j>=weight){
                take = value + pre[j-weight];
            }
            curr[j]=max(take,skip);
        }
        pre = curr;
    }
    cout<<pre[x]<<endl;

return 0;
}