#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll num,k;
    cin>>num>>k;
    while (k--)
    {
        if(num%10==0){
            num=num/10;
        }
        else{
            num--;
        }
    }
    cout<<num<<endl;
    
    return 0;
}