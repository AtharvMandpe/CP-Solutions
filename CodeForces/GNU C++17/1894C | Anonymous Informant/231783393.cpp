#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<ll> v(n);
        ll c=n-1;
        ll mandpe=1;
        set<ll> s;
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }
        for(ll i=0;i<k;i++){
            if(s.count(c)){
                break;
            }
            if(v[c]>n){
                mandpe=0;
                break;
            }
            s.insert(c);
            c=(c-v[c]+n)%n;
        }
        if(mandpe==1){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
}