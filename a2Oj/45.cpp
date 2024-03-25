#include <bits/stdc++.h>
#define pb push_back
#define ll long long
using namespace std;

int main(){
  ll n, m, mx = 0, res = 1;
  
  cin>>n;
  ll a[n];
  for(int i = 0; i < n; i++)  cin>>a[i];
  
  cin>>m;
  ll b[m];
  for(int i = 0; i < m; i++)  cin>>b[i];
  
  for(int i = 0; i < n; i++)
  {
    for(int j = 0; j < m; j++)
    {
      if(b[j]%a[i] == 0)
      {
        ll ratio = b[j]/a[i];
        if(ratio == mx)  res++;
        else if(ratio > mx)
        {
          mx = ratio;
          res = 1;
        }
      }
    }
  }

  cout<<res<<endl;

  return 0;
}