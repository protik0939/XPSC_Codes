
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, count = 0;
        cin >> n;
        ll res=0;
        for (ll i = 1; i <= n; i++)
        {
            ll tmp;
            cin>>tmp;
            res = max(res, tmp-i);
        }
        cout << res << endl;
    }
}