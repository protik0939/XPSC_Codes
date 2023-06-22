#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll res = 0;
        vector<ll> ara;
        ll arr[n];
        for (ll i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 1; i <= n; i++)
        {
            while (arr[i] % 2 == 0)
            {
                res++;
                arr[i] /= 2;
            }

            ll ind = i;
            ll tmp = 0;
            while (ind % 2 == 0)
            {
                tmp++;
                ind /= 2;
            }
            ara.push_back(tmp);
        }

        sort(ara.rbegin(), ara.rend());
        if (res >= n)
        {
            cout << 0 << endl;
        }
        else
        {
            ll ans = 0;
            for (int i = 0; i < ara.size(); i++)
            {
                res += ara[i];
                ans++;
                if (res >= n)
                {
                    cout << ans << endl;
                    break;
                }
            }
            if (res < n)
            {
                cout << -1 << endl;
            }
        }
    }
}