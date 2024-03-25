//I_love_%username%
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    ll maxi=v[0];
    ll ans=0;
    ll mini=v[0];
    for(int i=1;i<n;i++){
        if(v[i]<mini){
            ans++;
            mini=v[i];
        }
        else if(v[i]>maxi){
            ans++;
            maxi=v[i];
        }
    }cout<<ans<<endl;
    return 0;
}