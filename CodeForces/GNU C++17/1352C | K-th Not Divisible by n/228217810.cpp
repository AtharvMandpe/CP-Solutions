#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll s=1,e=n*k;
        ll mid;
        ll ans;
        while(s<=e){
            mid=(s+e)/2;
            ans=(n-1)*(mid/n) + (mid%n);
 
            if(ans == k){
                if(mid%n==0){
                    cout << mid-1 << endl;
                }
                else{
                    cout << mid << endl;
                }
                break;
            }
            else if(ans>k){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
    }
 
    return 0;
}