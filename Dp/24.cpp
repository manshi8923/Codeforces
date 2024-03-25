#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    const ll n = 2e5 + 5;
    vector<ll>sum(n,0);
    for(int i=1;i<n;i++){
        string s=to_string(i);
        int ans=0;
        for(int j=0;j<s.size();j++){
            ans+=s[j]-'0';
        }
        sum[i]=sum[i-1]+ans;
    }
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        cout<<sum[n]<<endl;
    }
    return 0;
}