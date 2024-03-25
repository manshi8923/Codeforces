#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> // for std::accumulate

using namespace std;

int main() {
int t;
cin >> t;
while (t--) {
int n;
cin >> n;
vector<long long> a(n);
for (int i = 0; i < n; ++i) {
cin >> a[i];
}

 long long sum = accumulate(a.begin(), a.end(), 0LL); // Calculate the sum of all elements
 long long least = sum / n; // Calculate the value that makes all elements equal
 
 if (sum % n != 0) {
 cout << "NO" << endl; // If sum is not divisible by n, it's not possible
 continue;
 }

 bool possible = true;
 long long excess = 0;
 for(int i = 0; i < n; i++) {
 if (a[i] > least) {
excess += a[i] - least; // Calculate the excess sum of elements greater than 'least'
 } else if (a[i] < least) {
if (excess >= least - a[i]) {
excess -= least - a[i]; // Reduce the excess
} else {
possible = false; // If not enough excess, it's not possible
break; }
}
 }
 
 if (possible) {
 cout << "YES" << endl;
 } else {
 cout << "NO" << endl;
 }
 }
 
 return 0;
}
