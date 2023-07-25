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
        ll arr[n], brr[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> brr[i];
        }
        for (ll i = 0; i < n; i++)
        {
            ll a = arr[i], b = brr[i];
            if ((a <= (b * 2)) && (b <= (a * 2)))
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}