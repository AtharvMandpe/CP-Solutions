#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
ll gcd(ll a, ll b)  
{  
    if (a == 0) 
        return b;  
    return gcd(b % a, a);  
}  
  
ll lcm(ll a, ll b)  
{  
    return (a / gcd(a, b)) * b; 
}  
 
ll range_sum(ll l, ll r) {
    if (l > r)
        return 0;
    return (l + r) * (r - l + 1) / 2;
}
 
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,x,y;
        cin>>n>>x>>y;
 
        if(x==y){
            cout << 0 << endl;
        }
        else{
            ll xwale,xnoty,ywale,ynotx;
            xwale = n/x;
            ywale = n/y;
            xnoty = xwale - n/lcm(x,y);
            ynotx = ywale - n/lcm(x,y);
 
            ll sum1=0,sum2=0;
            sum1 = range_sum(n-xnoty+1, n);
            sum2 = range_sum(1, ynotx);
            cout << sum1-sum2 << endl;
        }
    }
    return 0;
}