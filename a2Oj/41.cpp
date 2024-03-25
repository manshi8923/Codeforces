#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n,m;
    cin>>n>>m;
    vector<ll>v(m);
    ll s=0;
    ll init=1;
    for(int i=0;i<m;i++){
        ll x;
        cin>>x;
        if(x==init){
            s+=0;
        }
        else if(x>init){
            s+=(x-init);
        }
        else{
            s+=(n-init)+x;
        }
        init=x;
    }
    cout<<s<<endl;
    return 0;
}