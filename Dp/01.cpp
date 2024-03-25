//Alternating Subsequence
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>v;
        v.push_back(0);
        for(int i=0;i<n;i++){
            ll x;
            cin>>x;
            if(v.back()>=0){
                if(x<0){
                    v.push_back(x);
                }
                else{
                    v.back()=max(v.back(),x);
                }
            }
            else{
                if(x>0){
                    v.push_back(x);
                }
                else{
                    v.back()=max(v.back(),x);
                }
            }
        }
        ll s=0;
        for(auto it:v){
            s+=it;
        }
        cout<<s<<endl;
    }
    return 0;
}