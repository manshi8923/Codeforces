#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        if(a>b){
            swap(a,b);
        }
        ll x,y;
        bool flag=false;
        if(a%2==0){
            flag=true;
        }
        else if(b%2==0){
            x=a*2;
            y=b/2;
            if(x>y){
                swap(x,y);
            }
            if(!(x==a&&y==b)){
                flag=true;
            }
        }
        if(flag){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}