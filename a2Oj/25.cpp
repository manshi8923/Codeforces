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
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int ml=k*l;
    int lime=c*d;
    int salt=p;
    int ans=min({ml/nl,lime,salt/np});
    cout<<ans/n<<endl;
}
