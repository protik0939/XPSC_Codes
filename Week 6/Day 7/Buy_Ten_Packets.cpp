#include <bits/stdc++.h>
#define somoy                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
typedef long long int ll;
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        somoy;
        ll a, b;
        cin >> a >> b;
        ll res1 = 5 * a;
        ll res2 = (3 * a) + b;
        ll res3 = a + (2 * b);
        cout << min(res1, min(res2, res3)) << endl;
    }
}