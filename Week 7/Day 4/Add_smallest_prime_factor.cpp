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
        ll x, y, res;
        cin >> x >> y;
        for (ll i = 2; i <= x; i++)
        {
            if (x % i == 0)
            {
                res = i;
                break;
            }
        }
        x += res;
        y -= x;
        cout << (y / 2) + (y % 2) + 1 << endl;
    }
}