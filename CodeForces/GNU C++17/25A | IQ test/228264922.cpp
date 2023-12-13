#include <iostream>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    int e=0,o=0,eindex=0,oindex=0;
    for(int i=0;i<n;i++){
        int nu;
        cin>>nu;
        if(nu%2==0){
            e++;
            eindex=i+1;
        }
        else{
            o++;
            oindex=i+1;
        }
    }
    if(e==1){
        cout << eindex << endl;
    }
    else{
        cout << oindex << endl;
    }
    return 0;
}   