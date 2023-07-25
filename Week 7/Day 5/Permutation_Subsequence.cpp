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
        ll n, MOD = 1e9 + 7;
        cin >> n;
        map<ll, ll> mp;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            mp[x]++;
        }
        ll res = 0, tmp = 1;
        for (ll i = 1; i <= n; i++)
        {
            ll q = tmp * mp[i];
            q %= MOD;
            res += q;
            tmp = q;
            res %= MOD;
        }
        cout << res << endl;
    }
}