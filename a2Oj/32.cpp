// Jzzhu and Children
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> v(n);
    int i = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll senthome = 0;
    while (senthome < n - 1)
    {
        if (v[i] > 0)
        {
            v[i] -= m;
            if (v[i] <= 0)
                senthome++;
        }

        i = (i + 1) % n;
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i] > 0)
        {
            cout << i + 1 << endl;
            break;
        }
    }
    return 0;
}