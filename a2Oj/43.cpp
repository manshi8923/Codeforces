#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    string s=s2;
    reverse(s.begin(),s.end());
    if(s1==s){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
