//Effective Approach 
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n;
    cin>>n;
    vector<ll>v(100001);
    for(ll i=1;i<=n;i++){
        ll x;
        cin>>x;
        v[x]=i;
    }
    ll m;
    cin>>m;
    vector<ll>b(m);
    for(ll i=0;i<m;i++){
        cin>>b[i];
    }
    ll count=0;
    ll second=0;
    for(ll i=0;i<m;i++){
        count+=v[b[i]];
        second+=n+1-v[b[i]];
    }
    
   
    cout<<count<<" "<<second<<endl;
    return 0;
}