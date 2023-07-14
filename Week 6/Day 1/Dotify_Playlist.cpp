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
        ll n, k, l;
        cin >> n >> k >> l;
        vector<ll> arr;
        for (ll i = 0; i < n; i++)
        {
            ll x, y;
            cin >> x >> y;
            if (y == l)
            {
                arr.push_back(x);
            }
        }
        ll ans = 0;
        sort(arr.rbegin(), arr.rend());
        if (arr.size() < k)
        {
            cout << -1 << endl;
        }
        else
        {
            for (ll i = 0; i < k; i++)
            {
                ans = ans + arr[i];
            }
            cout << ans << endl;
        }
    }
}