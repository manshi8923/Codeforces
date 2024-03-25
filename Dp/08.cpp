#include <bits/stdc++.h>
using namespace std;


int main() {
 
  int t = 1;
  cin >> t;
  while (t--) {
    int n, queries;
    cin >> n;
    vector<int> a(n), vecto(n);
    for (int &i : a) {
      cin >> i;
    }
    vecto[n - 1] = n;
    for (int i = n - 2; i >= 0 ; i--) {
      vecto[i] = (a[i] == a[i + 1] ? vecto[i + 1] : i + 1);
    }
    cin >> queries;
    while (queries--) {
      int l, r;
      cin >> l >> r;
      --l;--r;
      if (vecto[l] > r) {
        cout << -1 << ' ' << -1 << endl;
      }
      else {
        cout << l + 1 << ' ' << 1 + vecto[l] << endl;
      }
    }
  }
  return 0;
}
