//Parallelopiped
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll aa,ba,ca;
    cin>>aa>>ba>>ca;
    ll a = sqrt((aa*ca) / ba);
    ll b = sqrt((ba * ca) / aa);
    ll c = sqrt((aa * ba) / ca);
    cout<<4*(a+b+c)<<endl;
}