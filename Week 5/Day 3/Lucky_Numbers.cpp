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
        ll a, b;
        cin >> a >> b;

        ll c = 0, uttor;
        ll res = -1;

        for (ll i = a; i <= b; i++)
        {
            if (c > 100)
            {
                break;
            }
            ll mx = INT_MIN, mn = INT_MAX, num = i;
            
            while (num != 0)
            {
                mx = max(mx, num % 10);
                mn = min(mn, num % 10);
                num /= 10;
            }
            
            ll dif = mx - mn;
            if (dif > res)
            {
                res = dif;
                uttor = i;
            }
            c++;
        }
        cout << uttor << endl;
    }
}
