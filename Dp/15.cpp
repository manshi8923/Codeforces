#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll funcu(ll number,ll diagonal){
        if(diagonal==(4*(number)-2)) {
            return (diagonal/2)+1;
        }
        else{
            if(diagonal%2==0) {
                return diagonal/2;
            }
            else {
                return diagonal/2+1;
            }
    }
}
int main(){
    ll t;
    cin>>t;
    while (t--)
    {
       ll n,k;
       cin>>n>>k;
       cout<<funcu(n,k)<<endl;
    }
    
    return 0;
}
