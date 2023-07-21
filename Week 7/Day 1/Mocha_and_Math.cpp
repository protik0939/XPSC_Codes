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
        cin >> n;
        ll res;
        cin >> res;
        n--;
        for (ll i = 0; i < n; i++)
        {
            ll tmp;
            cin >> tmp;
            res = (res & tmp);
        }
        cout << res << endl;
    }
}