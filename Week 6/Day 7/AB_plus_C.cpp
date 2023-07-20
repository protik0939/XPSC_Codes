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
    ll t, nm = 1000000;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;
        if (x == 1)
        {
            cout << -1 << endl;
        }
        else if (x <= nm)
        {
            cout << 1 << " " << 1 << " " << x - 1 << endl;
        }
        else if (x % nm == 0)
        {
            cout << (x / nm) - 1 << " " << nm << " " << nm << endl;
        }
        else if (x > nm)
        {
            cout << x / nm << " " << nm << " " << x % nm << endl;
        }
    }
}