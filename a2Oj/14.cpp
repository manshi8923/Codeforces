#include<bits/stdc++.h>
#define ll long long
using namespace std;
void funcu(vector<ll>vecto,ll size){
   unordered_map<ll,ll>mpp;
   for(int i=0;i<size;i++){
    mpp[vecto[i]]++;
   }
   ll count=0;
   set<int>first_set,second_set;
   while(mpp[count]>=2){
    first_set.insert(count);
    second_set.insert(count);count++;
   }
   if(mpp[count]>0){
    cout<<-1<<endl;
   }
   else{
    ll high=0;
    for(int i=0;i<size;i++){
        if(first_set.find(vecto[i])!=first_set.end()){
            first_set.erase(vecto[i]);
        }
        if(first_set.size()==0){
            high=i+1;
            break;
        }
    }

    for(int i=high;i<size;i++){
        if(second_set.find(vecto[i])!=second_set.end()){
            second_set.erase(vecto[i]);
        }
    }
    if(second_set.size()==0){
        cout<<2<<endl;
        cout<<1<<" "<<high<<endl;
        cout<<high+1<<" "<<size<<endl;
    }
    else{
        cout<<-1<<endl;
    }
   }
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        funcu(v,n);
    }
    return 0;
}