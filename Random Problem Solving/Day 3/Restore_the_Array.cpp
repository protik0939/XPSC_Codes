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
        cin >> n;
        n--;
        vector<ll> x(n);
        vector<ll> y(n + 1);
        for (ll i = 0; i < n; i++)
        {
            cin >> x[i];
        }

        y[0] = x[0];
        y[1] = x[0];

        for (int i = 1; i <= n; i++)
        {
            if (i < n)
                y[i] = min(y[i - 1], x[i]);
            if (x[i - 1] != y[i - 1])
                y[i] = max(x[i - 1], y[i - 1]);
        }

        for (ll i = 0; i <= n; i++)
        {
            cout << y[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
