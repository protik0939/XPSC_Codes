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
        ll h, x, y;
        cin >> h >> x >> y;
        ll p = h - y;
        ll q;

        if (p % x == 0)
        {
            q = (p / x) + 1;
        }
        else
        {
            q = (p / x) + 2;
        }
        cout << q << endl;
    }
}