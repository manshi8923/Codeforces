#include<bits/stdc++.h>
using namespace std;

int main(){
    string a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    a=a.append(b);
    sort(a.begin(),a.end());
    sort(c.begin(),c.end());
    if(a==c)
    {
        cout<<"YES\n";
    }
    else
        cout<<"NO\n";
    return 0;
}
