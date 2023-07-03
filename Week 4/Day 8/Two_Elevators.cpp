#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        ll p = abs(a - 1);
        ll q = abs(b - c) + abs(c - 1);
        if (p < q)
        {
            cout << "1" << endl;
        }
        else if (p > q)
        {
            cout << "2" << endl;
        }
        else
        {
            cout << "3" << endl;
        }
    }
}