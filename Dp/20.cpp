#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>v(n);
        ll zero=0;
        ll neg=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]==0){
                zero++;
            }
            if(v[i]<0){
                neg++;
            }
        }
        if(zero||neg%2){
            cout<<0<<endl;
        }else if(n==0){
            cout<<1<<endl;
            cout<<1<<" "<<0<<endl;
        }
        else{
            cout<<1<<endl;
            cout<<1<<" "<<0<<endl;
        }

    }
    return 0;
}