//word
#include <bits/stdc++.h>
#define range(i,n) for(int i= 0; i < (n); i++)
#define ll long long
#define arr(a,n)  for(int i=0;i<(n);i++) cin>>a[i];
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x)  x.begin(), x.end()
using namespace std;
int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--){
          string s;
          cin>>s;
          int l=0;
          int u=0;
          for(int i=0;i<s.length();i++){
            if(s[i]>=65&&s[i]<=90){
               u++;
            }
            else{
                l++;
            }
          }
          if(u>l){
            for(int i=0;i<s.length();i++){
                s[i]=toupper(s[i]);
            }
          }
          else{
            for(int i=0;i<s.length();i++){
                s[i]=tolower(s[i]);
            }
          }
          cout<<s<<endl;
    }
return 0;
}
