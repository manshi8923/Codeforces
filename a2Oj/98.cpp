//Adding Digits
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll a,b,n;cin>>a>>b>>n;
    ll ans=-1;
    for(int i=0;i<=9;i++){
        a=a*10+i;
        if(a%b==0){
            ans=a;
            break;
        }
        a=a/10;
    }
    cout<<ans;
    if(ans!=-1){
        for(int i=0;i<n-1;i++){
            cout<<0;
        }
    }
    cout<<endl;
    return 0;
}