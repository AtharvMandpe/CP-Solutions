#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
    ll x1,x2,x3;
    cin>>x1>>x2>>x3;
    vector<ll> v(3);
    v[0]=x1;
    v[1]=x2;
    v[2]=x3;
 
    sort(v.begin(), v.end());
 
    cout << v[1]-v[0] + v[2]-v[1] << endl;
    return 0;
}