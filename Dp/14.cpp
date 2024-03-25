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
        for(int i=0;i<n;i++)cin>>v[i];
        sort(v.begin(),v.end());
        ll ans=0;
        for(int i=1;i<n;i++){
            ans+=(v[i]-v[i-1]);
        }
        cout<<ans<<endl;
    }
    return 0;
}