//Petr and Book 
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    ll sum=0;
    vector<ll>v(7);
    for(int i=0;i<7;i++){
        cin>>v[i];
        sum+=v[i];
    }
   if(t>sum){
    t%=sum;
   }
   if(t==0){
    t=sum;
   }
   int index=0;
   while(t>0){
    t-=v[index];
    index++;
   }
cout<<index<<endl;
    return 0;
}