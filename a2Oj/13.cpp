//Perfect Permutation
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
     ll n;
      cin>>n;
    if(n%2!=0){
        cout<< -1<<endl;
    }
    else {
     for(int i=1;i<=n;i++){
        cout<<i+1<<" "<<i<<" ";
        i++;
    }
    cout<<endl;
    }
    return 0;
}