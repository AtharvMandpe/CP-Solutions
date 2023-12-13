#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
 
ll t;
cin>>t;
while(t--){
 
   ll n,k;
   cin>>n>>k;
    ll arr[n];
    for(int i  =0;i<n;i++){
        cin>>arr[i];
    }
  //  ll ans = arr[n-1];
    sort(arr,arr+n);
    ll ans = arr[1]-arr[0];
    ans = min(ans, arr[0]);
    for(int i= 1;i<n;i++){
        ans = min(ans, arr[i]);
        ans = min(ans,arr[i]-arr[i-1]);
    }
    if(k>=3){
        cout<<0<<endl;
        continue;
    }
    if(k==1){
        cout<<ans<<endl;
        continue;
    }
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            ll k1 = abs(arr[j]-arr[i]);
            ll s = 0;
            ll e = n-1;
            while(s<=e){
                ll m = (s+e)/2;
                ans = min(ans,abs(k1-arr[s]));
                 ans = min(ans,abs(k1-arr[e]));
                if(arr[m]==k1){
                    ans = 0;
                    break;
                }else if(arr[m]>k1){
                e = m-1;
                }else{
                s = m+1;
                }
            }
            if(s>=0 && s<n){
                ans = min(ans,abs(k1-arr[s]));
            }
             if(e>=0 && e<n){
                ans = min(ans,abs(k1-arr[e]));
            }
        }
    }
 
 
        cout<<ans<<endl;
 
 
}
 
 
}