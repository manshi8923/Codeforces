#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    vector<char>vecto(27);
    char character='a';
    for(int i=1;i<=26;i++){
        vecto[i]=character++;
    }
    ll n;
    cin>>n;
    while(n--){
        ll number;
        cin>>number;
        if(number<=28){
            cout<<'a'<<'a'<<vecto[number-2]<<endl;
        }
        else if(number<=53){
            number-=26;
            ll left=number-1;
            cout<<'a'<<vecto[left]<<'z'<<endl;
        }
        else{
            number=number-52;
            cout<<vecto[number]<<'z'<<'z'<<endl;
        }
    }
    return 0;
}