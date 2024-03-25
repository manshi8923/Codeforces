//Lights off
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    vector<vector<ll> >v(5,vector<ll>(5,0));
    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            int c;cin>>c;
            v[i][j]=c;
        }
    }
        for(int i=1;i<=3;i++){
            for(int j=1;j<=3;j++){
              cout<<(1+v[i][j]+v[i-1][j]+v[i][j-1]+v[i+1][j]+v[i][j+1])%2;
            }
            cout<<endl;
        }
    
    return 0;
}