//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
const int M = 1e9+7; 
#define ll long long int
int main(){
    ll n,x;
    cin>>n>>x;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    vector<int>nextState(x+1,0);
    nextState[0] = 1;
    for(int i=n-1;i>=0;i--){
        vector<int>currState(x+1,0);
        currState[0]=1;
        for(int sum =1;sum<=x;sum++){
            int skip = nextState[sum];
            int pick = 0;
            if(sum>=a[i]){
                pick = currState[sum-a[i]];
            }
            currState[sum] = (pick + skip)%M;
        }
        nextState = currState;
    }
    cout<<nextState[x]<<endl;

return 0;
}