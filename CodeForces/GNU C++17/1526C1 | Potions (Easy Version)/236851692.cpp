#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    priority_queue<ll, vector<ll>, greater<ll>> pq;
 
    ll ans = 0;
 
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
 
    ll sum = 0;
    for(ll i=0;i<n;i++){
        pq.push(v[i]);
        sum += v[i];
        ans++;
 
        while(sum < 0){
            sum -= pq.top();
            pq.pop();
            ans--;
        }
    }
 
    cout << ans << endl;
 
    return 0;
}