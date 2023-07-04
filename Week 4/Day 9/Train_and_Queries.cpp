#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, r;
        cin >> n >> r;
        map<ll, ll> x , y;
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (ll i = 0; i < n; i++)
        {
            if (!x[arr[i]])
            {
                x[arr[i]] = i+1;
            }
            y[arr[i]] = i+1;
        }

        while (r--)
        {
            ll a, b;
            cin >> a >> b;
            if (x[a] && y[b] && x[a] < y[b])
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}