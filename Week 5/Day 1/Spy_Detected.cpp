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
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (arr[0] != arr[1] && arr[0] != arr[2])
        {
            cout << "1" << endl;
        }
        else
        {
            ll r = arr[0];
            for (ll i = 0; i < n; i++)
            {
                if (arr[i] != r)
                {
                    cout << i + 1 << endl;
                }
            }
        }
    }
}