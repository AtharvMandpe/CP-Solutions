#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll l,r;
        cin>>l>>r;
        ll ans=0;
        while(l != 0 || r != 0){
            ans += r-l;
            r /= 10;
            l /= 10;
        }
        cout << ans << endl;
    }
    return 0;
}