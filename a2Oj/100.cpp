
#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
int n;
cin>>n;
int a[n],b[n],count=0;
for(int i=0;i<n;i++)
    cin>>a[i]>>b[i];
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(a[i]==b[j] && i!=j){
            count++;
        break;}
    }
}
 
cout<<n-count;
	return 0;
}