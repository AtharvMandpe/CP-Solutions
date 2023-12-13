#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
    ll n, k, l, c, d, p, nl, np;
    cin >> n>> k >> l>> c>> d>> p>> nl>> np;
    int n1=k*l;
    n1/=nl;
 
    int n2=c*d;
 
    int n3 = p/np;
    cout << min(n1,min(n2,n3))/n << endl;
    return 0;
}