#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#define ll long long
using namespace std;
 
bool customCompare(pair<int, int> p1, pair<int, int> p2) {
    return p1.second < p2.second;
}
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, p;
        cin >> n >> p;
 
        vector<int> a(n), b(n);
        vector<pair<int, int>> combined;
 
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
 
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
            combined.push_back({a[i], b[i]});
        }
 
        sort(combined.begin(), combined.end(), customCompare);
 
        for (int i = 0; i < n; ++i) {
            a[i] = combined[i].first;
            b[i] = combined[i].second;
        }
 
        ll ans = p;
        ll m=1;
        ll atta = 1;
        ll i=0;
        while(i<n && atta < n && b[i] <= p){
            if(a[i] > n-atta){
                a[i] = n-atta;
            }
            ans += (m*(b[i]))*(m*(a[i]));
            atta+= a[i];
            i++;
        }
 
        if(atta < n){
            ans += p*m*(n-atta);
        }
 
        cout << ans << endl;
 
    }
 
    return 0;
}