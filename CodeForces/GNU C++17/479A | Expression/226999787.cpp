#include<iostream>
#include<vector>
using namespace std;
 
int main(){
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    int ans = a+(b*c);
    ans = max(ans, a+b+c);
    ans = max(ans, (a*b)+c);
    ans = max(ans, a*(b+c));
    ans = max(ans, a*b*c);
    ans = max(ans, (a+b)*c);
    cout << ans << endl;
 
    return 0;
}