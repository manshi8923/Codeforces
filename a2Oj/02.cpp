//Beautiful Matrix
#include<bits/stdc++.h>
using namespace std;
int main(){
    int ir=0;int jc=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            int x;
            cin>>x;
            if(x==1){
                ir=i;
                jc=j;
            }
        }
    }
     cout<<abs(ir-2)+abs(jc-2)<<endl;
    return 0;
}