//panormix prediction
#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int a[]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
    int flag=1;
    for(int i=0;i<15;i++){
        if(a[i]==m&&a[i+1]==n){
            flag=0;
            break;
        }
    }
    if(!flag){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}