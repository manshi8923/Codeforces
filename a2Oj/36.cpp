#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    ll mini=abs(v[0]-v[n-1]);
    ll last=1;
    ll first=n;
    for(int i=0;i<n-1;i++){
       if(abs(v[i]-v[i+1])<mini){
        mini=abs(v[i]-v[i+1]);
        last=i+1;
        first=i+2;
       }
    }
    cout<<first<<" "<<last<<endl;
    return 0;
}