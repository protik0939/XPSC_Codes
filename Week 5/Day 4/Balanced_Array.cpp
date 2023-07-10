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
        if ((n / 2) % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            ll x = 2, y = 1;
            for (ll i = 0; i < n / 2; i++)
            {
                cout << x << " ";
                x += 2;
            }
            for (ll i = 0; i < (n / 2) - 1; i++)
            {
                cout << y << " ";
                y += 2;
            }
            cout << y + (((n/2)/2)*2) << endl;
        }
    }
}