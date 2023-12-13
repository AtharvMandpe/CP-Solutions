#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
void solve() {
    ll n;
    cin >> n;
 
    ll s = 1;
    ll e = n;
 
    ll minoddindex;
 
    while (s <= e) {
        ll m = (s + e) / 2;
 
        ll a = m;
        if(m%2==0){
            if(a+1 <= n){
                a++;
            }
            else{
                a--;
            }
        }
        ll b = ((a * a) - 1) / 2;
        ll c = a * a - b;
 
        if (b > n || c > n) {
            e = m - 1;
        } else {
            minoddindex = a;
            s = m + 1;
        }
    }
 
    cout << (ll)(minoddindex/2) << endl;
}
 
int main() {
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}