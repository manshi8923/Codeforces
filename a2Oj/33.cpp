#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n;
	cin>>n;
	int a[n][2],count=0;
	for(int i=0;i<n;i++){
	    cin>>a[i][0]>>a[i][1];
	}
	for(int i=0;i<n;i++)
	{
	    int l=0,r=0,u=0,d=0,k;
	    for(int j=0;j<n;j++){
	        if(a[i][0]>a[j][0] && a[j][1]==a[i][1])
	        l=1;
	        else if(a[i][0]<a[j][0] && a[j][1]==a[i][1])
	        u=1;
	        else if(a[i][0]==a[j][0] && a[j][1]<a[i][1])
	        r=1;
	        else if(a[i][0]==a[j][0] && a[j][1]>a[i][1])
	        d=1;
	        else
	        k=1;
	    }
	    if(l==1 && r==1 && d==1 && u==1)
	    count++;
	}
	cout<<count;
	return 0;
}