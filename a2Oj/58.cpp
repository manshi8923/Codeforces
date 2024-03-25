//chat room 
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string p="";
    for(int i=0;i<s.length();i++){
        if(s[i]=='h'||s[i]=='e'||s[i]=='l'||s[i]=='o'){
            p+=s[i];
        }
    }
    if(p=="hello"){
        cout<<"YES"<<endl;
    }
    return 0;
}