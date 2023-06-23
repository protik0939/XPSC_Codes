#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m, h, ans = 0;
        cin >> n >> m >> h;
        ll arr1[n];
        ll arr2[m];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        for (ll i = 0; i < m; i++)
        {
            cin >> arr2[i];
        }
        sort(arr1, arr1 + n);
        reverse(arr1, arr1 + n);
        sort(arr2, arr2 + m);
        reverse(arr2, arr2 + m);
        for (ll i = 0, j = 0; i < n && j < m; i++, j++)
        {
            if (arr2[j] * h > arr1[i])
            {
                ans += arr1[i];
            }
            else
            {
                ans += arr2[j] * h;
            }
        }
        cout << ans << endl;
    }
}