#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        string ans;
        for(long long i=0;i<n;i++){
            ans+='a';
        }
        long long kontirange;
        long long s=1,e=n-1;
        long long mid;
        while(s<=e){
            mid = (s+e)/2;
            long long summid = (mid*(mid+1))/2;
 
            if(summid >= k){
                kontirange = mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        ans[n-kontirange-1] = 'b';
        long long prevsum = ((kontirange-1)*(kontirange))/2;
        k-=prevsum;
        ans[n-k]='b';
 
        cout << ans << endl;
    }
    return 0;
}