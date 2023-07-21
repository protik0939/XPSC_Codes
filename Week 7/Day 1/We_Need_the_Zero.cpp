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
        vector<ll> arr(n);
        bool paini = true;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (ll i = 0; i < 256; i++)
        {
            vector<ll> brr = arr;
            for (ll j = 0; j < n; j++)
            {
                brr[j] = (brr[j] ^ i);
            }
            ll res = 0;
            for (ll j = 0; j < n; j++)
            {
                res = (res ^ brr[j]);
            }
            if (res == 0)
            {
                cout << i << endl;
                paini = false;
                break;
            }
        }
        if (paini)
        {
            cout << "-1" << endl;
        }
    }
}