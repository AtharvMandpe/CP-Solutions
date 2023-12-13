#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,a,b;
        cin>>n>>a>>b;
        if(a==1){
            if((n-1)%b == 0){
                cout << "Yes" << endl;
            }
            else{
                cout << "No" << endl;
            }
        }
        else{
            ll max_power = 1;
            while(max_power <= n/a){
                max_power *= a;
            }
            while(max_power > 0){
                if((n-max_power)%b == 0){
                    cout << "Yes" << endl;
                    break;
                }
                max_power /= a;
            }
            if(max_power == 0){
                cout << "No" << endl;
            }
        }
    }
    return 0;
}