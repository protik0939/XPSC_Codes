#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if ((a > b && a < c) || (a > c && a < b))
        {
            cout << a << endl;
        }
        else if ((b > a && b < c) || (b > c && b < a))
        {
            cout << b << endl;
        }
        else if ((c > a && c < b) || (c > b && c < a))
        {
            cout << c << endl;
        }
    }
}