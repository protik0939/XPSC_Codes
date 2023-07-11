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
        ll n, one = 0, two = 0;
        cin >> n;
        for (ll i = 0; i < n; i++)
        {
            ll tmp;
            cin >> tmp;
            if (tmp == 1)
            {
                one++;
            }
            if (tmp == 2)
            {
                two++;
            }
        }
        ll h = two % 2;
        ll k = one % 2;
        if (h == 0 && k == 0)
        {
            cout << "YES" << endl;
        }
        else if (h == 1 && k == 0 && one != 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}