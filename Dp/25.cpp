#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll ans=0;
        for(ll i=0;i<s.size();i++){
            if(i&&s[i]==s[i-1]&&s[i]=='*'){
                break;
            }
            ans+=(s[i]=='@');
        }
        cout<<ans<<endl;
    }
    return 0;
}