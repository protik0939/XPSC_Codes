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
        ll n, cnt = 0;
        cin >> n;
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        map<ll, ll> mp;
        for (ll i = 0; i < n; i++)
        {
            ll tmp = arr[i];
            ll ss = 0;
            while (tmp > 0)
            {
                ss++;
                tmp = (tmp >> 1);
            }
            mp[ss]++;
        }
        for (auto it : mp)
        {
            cnt += it.second * (it.second - 1) / 2;
        }
        cout << cnt << endl;
    }
}