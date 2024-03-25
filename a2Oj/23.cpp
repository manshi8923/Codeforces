#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    set<char> v;
    for(int i=0;i<s.size();i++)
        v.insert(s[i]);
    int n=v.size();
    if(n%2==0)
        cout<<"CHAT WITH HER!\n";
    else
        cout<<"IGNORE HIM!\n";
    return 0;
}
