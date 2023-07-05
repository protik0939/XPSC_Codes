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
        ll arr[n], brr[n], resrr[n], Maxx = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> brr[i];
        }
        for (ll i = 0; i < n; i++)
        {
            Maxx = max(Maxx, arr[i]);
            resrr[i] = brr[i] - Maxx;
            Maxx = brr[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cout << resrr[i] << " ";
        }
        cout << endl;
    }
}