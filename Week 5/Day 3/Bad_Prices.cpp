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
        ll n, mn, c = 0;
        cin >> n;
        ll arr[n + 1];
        for (ll i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        if (n == 1)
        {
            cout << "0" << endl;
            continue;
        }
        mn = arr[n];
        for (ll i = n - 1; i > 0; i--)
        {
            if (arr[i] > mn)
            {
                c++;
            }
            mn = min(mn, arr[i]);
        }
        cout << c << endl;
    }
}