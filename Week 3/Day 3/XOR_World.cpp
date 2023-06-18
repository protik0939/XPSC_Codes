#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll xr(ll x)
{
    if (x % 4 == 0)
    {
        return x;
    }
    else if (x % 4 == 1)
    {
        return 1;
    }
    else if (x % 4 == 2)
    {
        return x + 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    ll a, b;
    cin >> a >> b;
    if (a == 0)
    {
        cout << xr(b) << endl;
    }
    else
    {
        cout << (xr(b) ^ xr(a - 1)) << endl;
    }
    return 0;
}