#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        int res = 0;
        cin >> n;
        for (int i = 0; i < 3; i++)
        {
            ll c;
            cin >> c;
            if (c > n)
            {
                res++;
            }
        }
        cout << res << endl;
    }
}