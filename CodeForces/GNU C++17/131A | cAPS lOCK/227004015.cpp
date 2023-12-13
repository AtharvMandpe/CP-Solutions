#include<iostream>
#include<string>
using namespace std;
 
int main(){
    string s;
    cin>>s;
    bool caps=true;
    for(int i=1;i<s.size() ; i++){
        if(s[i]>='a' && s[i]<='z'){
            caps=false;
            break;
        }
    }
    if(!caps){
        cout << s << endl;
    }
    else{
        if(s[0] >= 'a' && s[0] <= 'z'){
            s[0] = s[0] + 'A' - 'a';
        }
        else{
            s[0] = s[0] - 'A' + 'a';
        }
        for(int i=1;i<s.size();i++){
            s[i] = s[i] - 'A' + 'a';
        }
        cout << s << endl;
    }
    return 0;
}