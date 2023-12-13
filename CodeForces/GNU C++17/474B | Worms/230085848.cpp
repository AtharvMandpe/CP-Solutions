#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++){
        cin>>v[i];
    }
    for(ll i=1; i<n;i++){
        v[i]+=v[i-1];
    }
    ll inp,s,e,ans,mid;
    ll m;
    cin>>m;
    for(ll i=0;i<m;i++){
        inp=0;
        s=0;
        e=n-1;
        ans=0;
        cin>>inp;
        while(s<=e){
            mid = (s+e)/2;
            if(v[mid]>=inp){
                ans=mid+1;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}