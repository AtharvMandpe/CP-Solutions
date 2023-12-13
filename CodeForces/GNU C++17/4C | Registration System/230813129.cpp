#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
    unordered_map<string, int> mp;
    ll n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        if(mp[s] == 0){
            cout << "OK" << endl;
            mp[s]++;
        }
        else{
            cout << s + to_string(mp[s]) << endl;
            mp[s]++;
        }
    }
    return 0;
}