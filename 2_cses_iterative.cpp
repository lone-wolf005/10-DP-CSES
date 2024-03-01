//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    int n,x;
    cin>>n>>x;
    vector<int>v1(n);
    for(int i=0;i<n;i++){
        cin>>v1[i];
    }
    vector<int>dp(x+1,1e7);

    // defining the total possible value of states
    // each state dp[x] give the answer of minimun no of coins required to get sum of x
    dp[0]=0;
    for(int i =1;i<=x;i++){
        for(int j = 0; j<n;j++){
            if(i>=v1[j]){
                dp[i]=min(dp[i],1+dp[i-v1[j]]);
            }
        }
  
    }
       if(dp[x]==1e7)cout<<-1<<endl;
     else cout<<dp[x]<<endl;


return 0;
}