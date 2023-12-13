#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    vector<ll> b(n);
    vector<ll> c(n);
    for(ll i=0;i<n;i++) cin>>a[i];
    for(ll i=0;i<n;i++) cin>>b[i];
 
    for(ll i=0;i<n;i++) c[i]=a[i]-b[i];
 
    ll ans=0;
 
    sort(c.begin(), c.end());
 
    for(ll i=0;i<n;i++){
        ll s=i+1;
        ll e=n-1;
        ll m, findex = n;
        while(s<=e){
            m = (s+e)/2;
            if(c[i]+c[m] > 0){
                findex = m;
                e=m-1;
            }
            else{
                s=m+1;
            }
        }
 
        ans += (n-findex);
    }
 
    cout << ans << endl;
 
    return 0;
}