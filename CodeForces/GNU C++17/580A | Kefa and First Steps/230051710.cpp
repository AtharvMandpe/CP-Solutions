#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<ll> dp(n, 1);
    for(ll i=1; i<n; i++){
        if(v[i]>=v[i-1]){
            dp[i]=dp[i-1]+1;
        }
    }
 
    ll ans=0;
    for(ll i=0;i<n;i++){
        ans = max(ans, dp[i]);
    }
 
    cout << ans << endl;
 
    return 0;
}