//Is your horseshoe on the other hoof?
#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int>st;
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    st.insert(a);
    st.insert(b);
    st.insert(c);
    st.insert(d);
    cout<<4-st.size()<<endl;
}