//Magic Numbers
#include<bits/stdc++.h>
#define ll long long
using namespace std;
string f(string s){
    if(s[0]!='1'){
        return "NO";
    }
    if(s.find("444")!=string::npos){
        return "NO";
    }
    for(int i=0;i<s.length();i++){
        if(s[i]!='1'&&s[i]!='4'){
            return "NO";
        }
    }
    return "YES";
}
int main(){
    string s;
    cin>>s;
    cout<<f(s)<<endl;
    return 0;
}