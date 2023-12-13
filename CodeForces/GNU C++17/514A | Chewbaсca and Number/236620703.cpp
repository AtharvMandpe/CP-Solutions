#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main()
{
    ll n;
    cin >> n;
    string s = to_string(n);
    for (ll i = 0; i < s.size(); i++)
    {
        int d = s[i] - '0';
        if(i>0){
            if (d >= 5)
            {
                d = 9 - d;
            }
        }
        else{
            if (d >= 5 && d!=9)
            {
                d = 9 - d;
            }
        }
        s[i] = to_string(d)[0];
    }
    cout << s << endl;
    return 0;
}