#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        ll frq[200005] = {0};
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        ll ans = 0;
        for (ll i = n - 1; i >= 0; i--)
        {
            if (frq[arr[i]] > 0)
            {
                ans = i + 1;
                break;
            }
            else
            {
                frq[arr[i]]++;
            }
        }
        cout << ans << endl;
    }
}