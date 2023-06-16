#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n, k, q;
        cin >> n >> k >> q;

        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        ll count = 0;
        ll tmp = 0;

        for (ll i = 0; i < n; i++)
        {
            if (arr[i] <= q)
            {
                tmp++;
            }
            else
            {
                tmp = 0;
            }

            if (tmp >= k)
            {
                count += (tmp - k) + 1;
            }
        }
        cout << count << endl;
    }

    return 0;
}