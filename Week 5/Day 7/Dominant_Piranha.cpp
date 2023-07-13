#include <bits/stdc++.h>
#define somoy                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
typedef long long int ll;
using namespace std;
int main()
{
    somoy;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        bool smc = true;
        ll mx = 0;
        for (ll i = 0; i < n; i++)
        {
            if (v[i] != v[0])
            {
                smc = false;
            }
            mx = max(mx, v[i]);
        }
        if (smc)
        {
            cout << "-1" << endl;
        }
        else
        {
            for (ll i = 0; i < n; i++)
            {
                if (v[i] == mx)
                {
                    if ((i > 0 && v[i - 1] < mx) || (i < n - 1 && v[i + 1] < mx))
                    {
                        cout << i + 1 << endl;
                        break;
                    }
                }
            }
        }
    }
}