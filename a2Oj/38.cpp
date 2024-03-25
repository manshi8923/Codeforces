#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    int min_el=*min_element(v.begin(),v.end());
    int count=0;
    int index=-1;
    for(int i=0;i<n;i++){
        if(min_el==v[i]){
            index=i+1;
            count++;
        }
    }
    if(count>=2){
        cout<<"Still Rozdil"<<endl;
    }
    else{
       cout<<index<<endl;
    }
    return 0;
}