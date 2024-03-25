//Tram 
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    ll sum=0;
    ll maxi=0;
    while(t--){
        ll x,y;
        cin>>x>>y;
        sum-=x;
        sum+=y;
        maxi=max(maxi,sum);
    }
    cout<<maxi<<endl;
    return 0;
}