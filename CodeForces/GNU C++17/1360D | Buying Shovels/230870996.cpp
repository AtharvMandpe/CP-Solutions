#include <iostream>
#include <cstring>
#define ll long long
using namespace std;
 
int main(){
    ll tt;
    cin >> tt;
    while (tt--) {
        ll n, k;
  cin >> n >> k;
 
  ll ans = n;
 
  for (ll j = 1; j * j <= n; j++) {
   if (n % j == 0) {
    if (j <= k) {
     ans = min(ans, n / j);
    }
 
    if (n / j <= k) {
     ans = min(ans, j);
    }
   }
  }
 
  cout << ans << endl;
    }
    return 0;
}