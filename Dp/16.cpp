#include <iostream>
#define ll long long
using namespace std;
string funcu(ll times,ll coins,ll cost){
     if(cost<=coins) {return "NO";}

    vector<ll>vecto(coins+1,0);
    vecto[0]=1;
    
    ll lim=1;
    cost-=1;

    for(int i=1;i<=coins;i++)
    {
        int req=ceil(1.0*(lim+1)/(times-1));
        vecto[i]=req;
        cost-=req;
        if(cost<0) {
            return "NO";
        }
        lim+=req;
    }

    return "YES";
}
int main() {
    int t;
    cin >> t;

    while (t--) {
        int times, coins, cost;
        cin >> times >> coins >> cost;
        cout<<funcu(times,coins,cost)<<endl;
       
    }

    return 0;
}
