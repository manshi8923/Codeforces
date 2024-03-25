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
        int left=-1;
        for(int i=0;i<n;i++){
            if(s[i]!='W'){
                left=i;
                break;
            }
        }
        int right=-1;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]!='W'){
                right=i;
                break;
            }
        }
        cout<<abs(right-left)+1<<endl;
    }
    return 0;
}