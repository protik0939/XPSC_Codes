#include <bits/stdc++.h>
#define somoy                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
typedef long long int ll;
using namespace std;

ll gcd(ll a, ll b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}

int main()
{
    somoy;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        ll g1 = 0, g2 = 0;
        for (ll i = 1; i <= n; i++)
        {
            cin >> arr[i];
            if (i % 2 == 0)
            {
                g2 = gcd(g2, arr[i]);
            }
            else
            {
                g1 = gcd(g1, arr[i]);
            }
        }
        bool hae = false;
        for (ll i = 2; i <= n; i += 2)
        {
            if (arr[i] % g1 == 0)
            {
                hae = true;
                break;
            }
        }
        if (!hae)
        {
            cout << g1 << endl;
        }
        else
        {
            hae = false;
            for (ll i = 1; i <= n; i += 2)
            {
                if (arr[i] % g2 == 0)
                {
                    hae = true;
                    break;
                }
            }
            if (hae)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << g2 << endl;
            }
        }
    }
}