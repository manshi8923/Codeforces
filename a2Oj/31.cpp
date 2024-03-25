//Dima and Friends
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n;
    cin>>n;
    vector<ll>v(n);
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        sum+=v[i];
    }
    ll position=sum%(n+1);
    ll count=0;
    for(int i=1;i<=5;i++){
        position++;
        if(position>n+1){
            position=1;
        }
        else if(position!=1){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}