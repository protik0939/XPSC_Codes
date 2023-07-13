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
        ll n, frq[3] = {0};
        cin >> n;
        for (ll i = 0; i < n; i++)
        {
            ll tmp;
            cin >> tmp;
            frq[tmp % 3]++;
        }

        ll res = frq[0];
        ll mn = min(frq[1], frq[2]);
        res += mn;
        frq[1] -= mn;
        frq[2] -= mn;
        cout << res + ((frq[1] + frq[2]) / 3) << endl;
    }
}