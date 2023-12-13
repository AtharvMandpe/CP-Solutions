#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main()
{
    ll n;
    cin >> n;
    unordered_map<int, int> mp;
    ll s;
    while (n--)
    {
        cin >> s;
        mp[s]++;
    }
    ll ans = mp[4];
    mp[4] = 0;
    ans += min(mp[1], mp[3]);
    ll no = min(mp[1], mp[3]);
    mp[1] -= no;
    mp[3] -= no;
    ans += mp[3];
    mp[3] = 0;
    ans += (ll)(mp[2] / 2);
    mp[2] -= (ll)(mp[2] / 2)*2;
 
    if (mp[2] != 0)
    {
        if (mp[1] > 2)
        {
            ans++;
            mp[1] -= 2;
            if (mp[1] != 0)
            {
                ans += (ll)(mp[1] / 4);
                if (mp[1] % 4 != 0)
                {
                    ans++;
                }
            }
            mp[2] = 0;
        }
        else
        {
            ans++;
            mp[2] = 0;
            mp[1] = 0;
        }
    }
    else
    {
        if (mp[1] != 0)
        {
            ans += (ll)(mp[1] / 4);
            if (mp[1] % 4 != 0)
            {
                ans++;
            }
        }
    }
 
    cout << ans << endl;
 
    return 0;
}