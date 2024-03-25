#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    while (t--)
    {
        ll n;cin>>n;
        vector<ll>v(n);
        string s="";
        char ch='a';
        for(int i=0;i<n;i++)cin>>v[i];
        unordered_map<char,int>mp;
        for(int i=0;i<n;i++){
            if(v[i]==0){
                s+=ch;
                mp[ch]++;
                ch++;
            }
            else{
                for(auto it:mp){
                    if(it.second==v[i]){
                        // cout<<it.first<<"==1"<<endl;
                        s+=it.first;
                        mp[it.first]++;
                        break;
                    }
                }
            }
        }
        cout<<s<<endl;
        // cout<<s.length()<<endl;
    }
    return 0;
}