#include <bits/stdc++.h>
 
#define int long long
using namespace std;
bool prime[1000001];
int32_t main()
{
    for(int i=2;i<=1e6;i++){
        prime[i]=1;
    }
    for(int i=2;i*i<=1e6;i++){
        if(prime[i]){
            for(int j=i*i;j<=1e6;j+=i){
                prime[j]=0;
            }
        }
    }
    map<int,int> m;
    for(int i=2;i<=1e6;i++){
        if(prime[i]){
            int x = i*i;
            m[x]=1;  //(x,1)such that x is t-prime
        }
    }
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(m[a[i]]==1){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
}