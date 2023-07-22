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
        ll n, res = 0;
        cin >> n;
        map<ll, ll> mp1, mp2;
        ll tmp = n;
        while (tmp--)
        {
            ll q;
            cin >> q;
            mp1[q]++;
        }
        for (auto it : mp1)
        {
            ll a = it.first, b = it.second;
            for (ll j = a; j <= n; j += a)
            {
                mp2[j] += b;
                res = max(res, mp2[j]);
            }
        }
        cout << res << endl;
    }
}