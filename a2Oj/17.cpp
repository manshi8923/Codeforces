//cupboards
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    ll n=t;
    ll c1=0;
    ll c2=0;
    while(t--){
        ll l,r;
        cin>>l>>r;
        if(l==0){
            c1++;
        }
        if(r==0){
            c2++;
        }
    }
    cout<<min(c1,n-c1)+min(c2,n-c2)<<endl;
    return 0;
}