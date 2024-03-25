//HQ9+
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    string s;
    cin>>s;
    if(s.find('H')!=string::npos){
        cout<<"YES"<<endl;
    }
    else if(s.find('Q')!=string::npos){
        cout<<"YES"<<endl;
    }
    else if(s.find('9')!=string::npos){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}