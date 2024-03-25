#include<bits/stdc++.h>
#define ll long long
using namespace std;
void mad(vector<ll>vecto,ll n){
    ll left=0;
    ll right=0;
    int start=0;
    while(vecto[start]==0){
        start++;
    }
    ll end=n-1;
    while(vecto[end]==0){
        end--;
    }
    for(int i=start;i<n;i++){
        if(vecto[i]==1){
            continue;
        }
        else{
            start=i;
            break;
        }
    }
    for(int i=end;i>=0;i--){
        if(vecto[i]==1){
            continue;
        }
        else{
            end=i;
            break;
        }
    }
     if(start==n||start==0){
        start=0;
        cout<<end<<endl;
        return ;
    }
   else{
    start--;
   }
    if(end==-1||end==n-1){
        end=0;
        cout<<start<<endl;
        return ;
    }
    else{
        end++;
    }
    cout<<"s"<<start<<endl;
    cout<<"e"<<end<<endl;
    cout<<abs(end-start)-1<<endl;
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
        mad(v,n);
    }
}