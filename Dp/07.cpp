#include<bits/stdc++.h>
#define ll long long
using namespace std;
string f(vector<ll>v1,vector<ll>v2,ll n,ll m,ll k){
     set<int> st1,st2;
          for(int i=0;i<n;i++){
             if(v1[i]<=k) st1.insert(v1[i]);
          }
          for(int j=0;j<m;j++){
             if(v2[j]<=k) st2.insert(v2[j]);
          }


          if(st1.size() <k/2 || st2.size()<k/2) return "NO";
          else{
            bool f=true;
          set<int> s;
          for(auto it:st1){
           s.insert(it);
          }

          for(auto it: st2){
             s.insert(it);
          }
                 
            for(int i=1;i<=k;i++){
                  if(s.find(i)==s.end()) f=false;
            }
           if(f) return "YES";
           else return "NO";
          }
}
int main(){
       int t;
       cin>>t;
       while(t--){
          int n,m,k;
          cin>>n>>m>>k;
          vector<ll>a(n);
          vector<ll>b(m);
          for(int i=0;i<n;i++) cin>>a[i];
          for(int j=0;j<m;j++) cin>>b[j];
          sort(a.begin(),a.end());
          sort(b.begin(),b.end());
          cout<<f(a,b,n,m,k)<<endl;
       }
}
