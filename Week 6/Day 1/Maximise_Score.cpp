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
        ll n, res = INT_MAX;
        cin >> n;
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (ll i = 0; i < n; i++)
        {
            ll mx = 0;
            if (i + 1 < n)
            {
                mx = max(mx, abs(arr[i + 1] - arr[i]));
            }
            if (i - 1 >= 0)
            {
                mx = max(mx, abs(arr[i - 1] - arr[i]));
            }
            res = min(res, mx);
        }
        cout << res << endl;
    }
}