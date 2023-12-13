#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
 
int main() {
 
 int t=1; cin >> t;
 while(t--){
  int n;
        cin>>n;
        vector<int> v(2*n);
        for(int i=0;i<2*n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int xd=0,yd=0;
        for(int i=0;i<n-1;i++){
            xd+=v[i+1]-v[i];
        }
        for(int i=n;i<2*n-1;i++){
            yd+=v[i+1]-v[i];
        }
        cout << xd+yd << endl;
        for(int i=0;i<n;i++){
            cout << v[i] << " " << v[i+n] << endl;
        }
 }
 
 
}