#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t=1;
    while (t--)
    {
       ll n;
       cin>>n;
       vector<ll>v(n);
       for(int i=0;i<n;i++){
        cin>>v[i];
       }
       vector<ll>v1;
       vector<ll>v2;
       vector<ll>v3;
       v1=v;
       v2.push_back(0);
       v3.push_back(0);
       sort(v1.begin(),v1.end());
       ll ans=0;
       for(auto it:v){
        ans+=it;
        v2.push_back(ans);
       }
       ans=0;
       for(auto it:v1){
        ans+=it;
        v3.push_back(ans);
       }
       ll q;
       cin>>q;
       while(q--){
        ll a,b,c;
        cin>>a>>b>>c;
        if(a==1){
            cout<<v2[c]-v2[b-1]<<endl;
        }
        else{
            cout<<v3[c]-v3[b-1]<<endl;
        }
       }
    }
    
    return 0;
}