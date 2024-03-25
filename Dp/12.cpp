#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        string s = "";
        for (int j = 0; j < n; j++)
        {
            char ch = 'a';
            for (int i = 0; i < k; i++)
            {
                s += ch;
                ch++;
            }
        }
        cout << s << endl;
    }
    return 0;
}