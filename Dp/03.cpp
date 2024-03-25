#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    while (t--)
    {
       ll n;
       cin>>n;
       vector<pair<ll,ll> >v(n);
       for(int i=0;i<n;i++){
        cin>>v[i].first;
       }
       for(int i=0;i<n;i++){
        cin>>v[i].second;
       }
       sort(v.begin(),v.end());
       for(auto it:v){
        cout<<it.first<<" ";
       }
       cout<<endl;for(auto it:v)cout<<it.second<<" ";
       cout<<endl;
    }
    
    return 0;
}