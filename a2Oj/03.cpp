//Queue at the school 
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    while(k--){
        for(int i=0;i<n;i++){
            if(s[i]=='B'&&s[i+1]=='G'){
                swap(s[i],s[i+1]);
                i++;
            }
        }
    }
    cout<<s<<endl;
    return 0;
}