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
    ll q;
    cin>>q;
    ll m,s,e,ans,mid;
    sort(v.begin(), v.end());
    for(ll i=0;i<q;i++){
        m=0;
        s=0;
        e=n-1;
        ans=0;
        cin>>m;
        while(s<=e){
            mid=(s+e)/2;
            if(v[mid]>m){
                e=mid-1;
            }
            else{
                ans = mid+1;
                s=mid+1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}