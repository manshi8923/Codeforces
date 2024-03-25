#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string a,b,c;
        cin>>a>>b>>c;
        bool f=true;
        for(int i=0;i<n;i++){
            if(a[i]!=c[i]&&b[i]!=c[i]){
                f=false;
            }
        }
        if(f){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}