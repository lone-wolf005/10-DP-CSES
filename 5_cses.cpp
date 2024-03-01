//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
const int M = 1e9+7;
#define ll long long int
int main(){
 int n;
 cin>>n;
 vector<int>dp(10,1);
 dp[0]=0;
 for(int i=10;i<=n;i++){
    string num = to_string(i);
    int ans = INT_MAX;
    for(auto x:num){
       int digit = x - '0';
       if(digit!=0){
        ans = min(ans,1+dp[10-digit]);
       }
    }
    dp.push_back(ans);
    dp.erase(dp.begin());
 }
 if(n<=9)cout<<dp[n]<<endl;
 else cout<<dp[9]<<endl;

return 0;
}