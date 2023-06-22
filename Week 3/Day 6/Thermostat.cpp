#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll l, r, x, a, b;
        cin >> l >> r >> x >> a >> b;
        if (a == b)
        {
            cout << 0 << endl;
        }
        else if (abs(a - b) >= x)
        {
            cout << 1 << endl;
        }
        else if (r - a >= x && r - b >= x || a - l >= x && b - l >= x)
        {
            cout << 2 << endl;
        }
        else if (a - l >= x && r - b >= x || r - a >= x && b - l >= x)
        {
            cout << 3 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}