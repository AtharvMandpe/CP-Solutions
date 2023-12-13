#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a,b,k1,k2,q1,q2;
        cin>>a>>b;
        cin>>k1>>k2;
        cin>>q1>>q2;
        ll cx = abs(q1-k1);
        ll cy = abs(q2-k2);
 
 
        ll ans=0;
        ll pos1x = k1+a;
        ll pos1y = k2+b;
 
        ll pos2x = k1+a;
        ll pos2y = k2-b;
 
        ll pos3x = k1-a;
        ll pos3y = k2+b;
 
        ll pos4x = k1-a;
        ll pos4y = k2-b;
 
        ll pos5x = k1+b;
        ll pos5y = k2+a;
 
        ll pos6x = k1+b;
        ll pos6y = k2-a;
 
        ll pos7x = k1-b;
        ll pos7y = k2+a;
 
        ll pos8x = k1-b;
        ll pos8y = k2-a;
 
        bool pos1=0,pos2=0,pos3=0,pos4=0,pos5=0,pos6=0,pos7=0,pos8=0;
 
 
        if(abs(q1-pos1x)==a && abs(q2-pos1y)==b){
            ans++;
        }
        else if(abs(q1-pos1x)==b && abs(q2-pos1y)==a){
            ans++;
        }
 
        if( abs(q1-pos2x)==a &&  abs(q2-pos2y)==b){
            ans++;
        }
        else if( abs(q1-pos2x)==b &&  abs(q2-pos2y)==a){
            ans++;
        }
 
        if(abs(q1-pos3x)==a && abs(q2-pos3y)==b){
            ans++;
        }
        else if(abs(q1-pos3x)==b && abs(q2-pos3y)==a){
            ans++;
        }
 
        if(abs(q1-pos4x)==a && abs(q2-pos4y)==b){
            ans++;
        }
        else if(abs(q1-pos4x)==b && abs(q2-pos4y)==a){
            ans++;
        }
 
        if(abs(q1-pos5x)==a && abs(q2-pos5y)==b){
            ans++;
        }
        else if(abs(q1-pos5x)==b && abs(q2-pos5y)==a){
            ans++;
        }
 
        if(abs(q1-pos6x)==a && abs(q2-pos6y)==b){
            ans++;
        }
        else if(abs(q1-pos6x)==b && abs(q2-pos6y)==a){
            ans++;
        }
 
        if(abs(q1-pos7x)==a && abs(q2-pos7y)==b){
            ans++;
        }
        else if(abs(q1-pos7x)==b && abs(q2-pos7y)==a){
            ans++;
        }
 
        if(abs(q1-pos8x)==a && abs(q2-pos8y)==b){
            ans++;
        }
        else if(abs(q1-pos8x)==b && abs(q2-pos8y)==a){
            ans++;
        }
 
        if(a==b){
            ans = ans/2;
        }
 
        cout << ans << endl;
    }
    return 0;
}