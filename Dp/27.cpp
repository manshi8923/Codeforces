#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        vector<ll>v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        string s;
        cin>>s;
        stack<ll>st;
        ll start=0;
        ll end=n-1;
        for(int i=0;i<n;i++){
            if(s[i]=='L'){
                st.push(v[start]);
                start++;
            }
            else{
                st.push(v[end]);
                end--;
            }
        }
        ll res=1;
        vector<ll>re;
        while(!st.empty()){
            ll val=st.top();
            st.pop();
            res*=val;
            res%=m;
            re.push_back(res);
        }
        for(int i=n-1;i>=0;i--){
            cout<<re[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}