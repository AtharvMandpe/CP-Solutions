#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int solve(vector<ll> &v, int currindex, int ans){
    if(currindex == v.size()){
        return ans;
    }
 
    if(v[currindex] < v[currindex-1]){
        return max(ans, solve(v, currindex+1, 1));
    }
    else{
        return max(ans, solve(v, currindex+1, ans+1));
    }
}
 
int main(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout << solve(v, 1, 1) << endl;
 
    return 0;
}