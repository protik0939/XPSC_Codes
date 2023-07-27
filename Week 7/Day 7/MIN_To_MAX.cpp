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
        ll n, mn = INT_MAX;
        cin >> n;
        vector<ll> arr(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            mn = min(mn, arr[i]);
        }
        ll cnt = 0;
        for (ll i = 0; i < n; i++)
        {
            if (arr[i] == mn)
            {
                cnt++;
            }
        }
        cout << n - cnt << endl;
    }
}