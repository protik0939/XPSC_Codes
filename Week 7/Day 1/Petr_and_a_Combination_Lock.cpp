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
    ll n;
    cin >> n;
    ll arr[n];
    bool paisi = false;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (ll i = 0; i < (1 << n); i++)
    {
        ll ans = 0;
        for (ll j = 0; j < n; j++)
        {
            if ((i & (1 << j)) != 0)
            {
                ans += arr[j];
            }
            else
            {
                ans -= arr[j];
            }
        }
        if (ans%360 == 0)
        {
            paisi = true;
        }
    }
    if (paisi)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}