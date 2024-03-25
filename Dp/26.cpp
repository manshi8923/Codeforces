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
        ll curr=v[0];
        for(int i=1;i<n;i++){
            curr/=v[i];
            curr++;
            curr*=v[i];
        }
        cout<<curr<<endl;
    }
    return 0;
}