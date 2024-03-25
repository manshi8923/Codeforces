//Football
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    unordered_map<string,ll>mp;
    while(t--){
        string p;
        cin>>p;
        mp[p]++;
    }
    string s="";
    ll count=0;
    for(auto it:mp){
        if(it.second>count){
            count=it.second;
            s=it.first;
        }
    }
    cout<<s<<endl;
    return 0;
}