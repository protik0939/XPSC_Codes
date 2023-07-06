#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        if (y % x != 0 || y < x)
        {
            cout << "0 0" << endl;
        }
        else
        {
            cout << "1" << " " << y/x << endl;
        }
    }
}
