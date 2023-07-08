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
        ll n, x, c = 0;
        cin >> n >> x;
        vector<ll> arr(n);
        map<ll, ll> f;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            f[arr[i]]++;
        }
        sort(arr.begin(), arr.end());
        for (ll i = 0; i < n; i++)
        {
            if (f[arr[i] * x] > 0 && f[arr[i]] > 0)
            {
                f[arr[i]]--;
                f[arr[i] * x]--;
            }
        }
        for (ll i = 0; i < n; i++)
        {
            if (i == 0)
            {
                c += f[arr[i]];
            }
            else if (arr[i] == arr[i - 1])
            {
                continue;
            }
            else
            {
                c += f[arr[i]];
            }
        }
        cout << c << endl;
    }
}
