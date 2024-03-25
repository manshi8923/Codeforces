//Stones on the table
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    int count=0;
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}