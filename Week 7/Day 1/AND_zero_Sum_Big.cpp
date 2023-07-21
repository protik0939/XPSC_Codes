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
    ll t, M = 1e9 + 7;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        ll res = 1;
        while (b--)
        {
            res = (res * a) % M;
        }
        cout << res << endl;
    }
}