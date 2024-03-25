//borze
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string str="";
    for(int i=0;i<s.length();i++){
        if(s[i]=='-'&&s[i+1]=='-'){
            str+='2';
            i++;
        }
        else if(s[i]=='-'&&s[i+1]=='.'){
            str+='1';
            i++;
        }
        else if(s[i]=='.'){
            str+='0';
        }
    }
    cout<<str<<endl;
    return 0;
}