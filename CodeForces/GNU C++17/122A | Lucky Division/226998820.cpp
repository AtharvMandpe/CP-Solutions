#include<iostream>
#include<vector>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    vector<int> arr = {4,7,47,74,444,447,474,477,744,747,774,777};
    bool ans=false;
    for(int i=0;i<arr.size() ; i++){
        if(n%arr[i] == 0){
            ans=1;
            break;
        }
    }
    if(ans){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}