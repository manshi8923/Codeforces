//Young Physicist
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n;
    cin>>n;
    vector<vector<int> >v(n,vector<int>(3,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            int x;
            cin>>x;
            v[i][j]=x;
        }
    }
    int flag=0;
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            sum+=v[j][i];
        }
        if(sum!=0){
            flag=1;
            break;
        }
    }
    if(flag){
        cout<<"NO"<<endl;
}
else{
    cout<<"YES"<<endl;
}
    return 0;
}   