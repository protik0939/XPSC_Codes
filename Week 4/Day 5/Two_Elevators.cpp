#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, c, tmp;
        cin >> a >> b >> c;
        ll x = abs(a - 1);
        ll y = abs(b - c) + abs(c - 1);
        if (x == y)
        {
            cout << "3" << endl;
        }
        else if (x > y)
        {
            cout << "2" << endl;
        }
        else if (x < y)
        {
            cout << "1" << endl;
        }
    }
}