#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        int n = 0, m = 0, k = 0, ans = 0, cnt = 0, sum = 0;
  cin >> n;
  vector<int> v(n);
  for (auto &i : v) {
    cin >> i;
  }
  int first = -1, last = -1;
  for (int i = 0; i < n; i++) {
    if (v[i] == 1) {
      first = i;
      break;
    }
  }
  for (int i = n - 1; i >= 0; i--) {
    if (v[i] == 1) {
      last = i;
      break;
    }
  }
  for (int i = first; i <= last; i++) {
    if (v[i] == 0) {
      ans++;
    }
  }
  cout << ans<<endl;
    }
    return 0;
} 
