#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    bool start=false;
    int kitivelastart=0;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int schaend=-1;
    int s=0;
    int e=0;
    for(int i=0;i<n-1;i++){
        if(kitivelastart>1){
            e=0;
            s=0;
            break;
        }
        if(start){
            e=i;
        }
        if(v[i+1]<v[i] && !start){
            s=i;
            start=true;
            schaend = v[i];
            kitivelastart++;
        }
        if(v[i+1]>v[i] && start){
            start=false;
        }
    }
    if(start && kitivelastart==1 && v[n-2]>v[n-1]){
        e++;
    }
    bool adhiprint=false;
    if(schaend != -1 && e+1<n){
        if(schaend > v[e+1]){
            cout << "no" << endl;
            adhiprint = true;
        }
    }
    if(s>0 && !adhiprint){
        if(v[e]>v[s-1]){
            cout << "yes" << endl;
            cout << s+1 << " " << e+1 << endl;
            adhiprint = true;
        }
        else{
            cout << "no" << endl;
            adhiprint = true;
        }
    }
    if(kitivelastart<=1 && !adhiprint){
        cout << "yes" << endl;
        cout << s+1 << " " << e+1 << endl;
        adhiprint = true;
    }
    if(!adhiprint){
        cout << "no" <<endl;
    }
    return 0;
}