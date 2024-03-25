#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
       vector<string>v;
        for(int i=0;i<n;i++){
            string s;
            cin>>s;
            v.push_back(s);
        }
       set<int>st;
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=0;j<n;j++){
                if(v[i][j]=='1'){
                    count++;
                }
            }
            if(count!=0){
               st.insert(count);
            }
        }

        if(st.size()==1){
            cout<<"SQUARE"<<endl;
        }
        else{
            cout<<"TRIANGLE"<<endl;
        }
    }
    return 0;
}