#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n;
    cin >> n;
    ll arr[n], cpr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        cpr[i] = arr[i];
    }
    ll pr1[n], pr2[n];
    sort(cpr, cpr + n);
    pr1[0] = arr[0];
    pr2[0] = cpr[0];
    for (ll i = 1; i < n; i++)
    {
        pr1[i] = arr[i] + pr1[i - 1];
        pr2[i] = cpr[i] + pr2[i - 1];
    }
    ll m;
    cin >> m;
    while (m--)
    {
        ll t, l, r;
        cin >> t >> l >> r;
        if (t == 1)
        {
            if (l - 2 < 0)
            {
                cout << pr1[r - 1] << endl;
            }
            else
            {
                cout << pr1[r - 1] - pr1[l - 2] << endl;
            }
        }
        else
        {
            if (l - 2 < 0)
            {
                cout << pr2[r - 1] << endl;
            }
            else
            {
                cout << pr2[r - 1] - pr2[l - 2] << endl;
            }
        }
    }
}