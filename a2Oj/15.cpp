
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define int long long
#define endl "\n"
#define mod 1000000007
int32_t main()
{   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        unordered_map<int,int>m;
        for(int i=0; i<n; i++){
            cin >> a[i];
            m[a[i]]++;
        }
        int j=0;
        set<int>s,ss;
        while(m[j]>=2){
            s.insert(j);
            ss.insert(j);
            j++;
        }
        if(m[j]>0){
            cout<<-1<<endl;
        }
        else{
            int r=0;
            for(int i=0; i<n; i++){
                if(s.find(a[i])!=s.end()){
                    s.erase(a[i]);
                }
                if(s.size()==0){
                    r=i+1;
                    break;
                }
            }
            for(int i=r; i<n; i++){
                if(ss.find(a[i])!=ss.end()){
                    ss.erase(a[i]);
                }
            }
            if(ss.size()==0){
                cout<<2<<endl;
                cout<<1<<" "<<r<<endl;
                cout<<r+1<<" "<<n<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }
    }
    return 0;
}
