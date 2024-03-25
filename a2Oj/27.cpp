#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int n=s1.length(),res=0;
    
    for(int i=0;i<n;i++)
    {
        int x=(int)s1[i];
        if(x>=97)
        x-=32;
        
        int y=(int)s2[i];
        if(y>=97)
        y-=32;
        
        
        int d=x-y;
        
        if(d==0)
        {
            res=0;
        }
        
        
        else if(d>0){
        res=1;
        break;}
        
        else if(d<0){
        res=-1;
            break;
        }
    }
      cout<<res;

    return 0;
}
