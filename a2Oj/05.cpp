//beautiful year
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll y;
    cin>>y;
    while(true){
        y+=1;
        int a=y/1000;
        int b=(y/100)%10;
        int c=(y/10)%10;
        int d=y%10;
        if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d){
            break;
        }
    }
     cout<<y<<endl;
    return 0;
}