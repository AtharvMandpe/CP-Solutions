#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        string s = to_string(n);
        vector<char> v;
        ll ans = 0;
        for (ll i = s.size() - 1; i >= 0; i--) {
            v.push_back(s[i]);
            if (s[i] != '0') {
                ans++;
            }
        }
 
        cout << ans << endl;
        for (ll i = 0; i < v.size(); i++) {
            ll d = v[i]-'0';
            for (ll j = 0; j < i; j++) {
                d *= 10;
            }
            if(d != 0){
                cout << d << " ";
            }
        }
 
        cout << endl;
    }
    return 0;
}