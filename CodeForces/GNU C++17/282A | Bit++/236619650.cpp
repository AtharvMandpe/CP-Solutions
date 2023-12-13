#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
    ll t;
    cin>>t;
    ll x=0;
    while(t--){
        string s;
        cin>>s;
        if(s[0]=='+' || s[2]=='+'){
            x++;
        }
        else{
            x--;
        }
    }
 
    cout << x << endl;
    return 0;
}