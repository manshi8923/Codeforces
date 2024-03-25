#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n;
    cin>>n;
    vector<ll>v(n);
    ll zero=0;
    ll five=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]==0){
            zero++;
        }
        else{
            five++;
        }
    }
   ll x=five%9;
   five-=x;
   if(zero>0&&five>0){
    for(int i=0;i<five;i++){
        cout<<5;
    }
    for(int i=0;i<zero;i++){
        cout<<0;
    }
   }
   else if(zero>0){
    cout<<0;
   }
   else{
    cout<<-1;
   }
   cout<<endl;
    return 0;
}