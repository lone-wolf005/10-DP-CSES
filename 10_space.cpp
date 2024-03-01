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

vector<int>pre(m+1);

for(int i=0;i<=m;i++){
       pre[i]=i;
}

for(int i=1;i<=n;i++){
     vector<int>curr(m+1,1e6);
    curr[0]=i;
    for(int j=1;j<=m;j++){
        if(a[i-1]==b[j-1]){
            curr[j]=pre[j-1];
        }
        else{
            curr[j]=1+pre[j-1];
            curr[j]= min(curr[j],1+pre[j]);
            curr[j]= min(curr[j],1+curr[j-1]);
        }
    
    }
    // for(auto x:curr)cout<<x<<" ";
    // cout<<endl;
    pre = curr;
}
cout<<pre[m]<<endl;

return 0;
}