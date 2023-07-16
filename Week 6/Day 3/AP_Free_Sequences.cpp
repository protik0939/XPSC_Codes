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
        ;
        cin >> n;
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (ll i = 0; i < n - 2; i++)
        {
            for (ll j = i + 1; j < n - 1; j++)
            {
                for (ll k = j + 1; k < n; k++)
                {
                    if (arr[j] - arr[i] == arr[k] - arr[j])
                    {
                        cnt++;
                    }
                }
            }
        }
        if (cnt > 0)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }
}