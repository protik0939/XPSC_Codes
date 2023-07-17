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
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        string s;
        cin >> s;
        a = s[0] - '0';
        a *= 10;
        a += s[1] - '0';

        b = s[3] - '0';
        b *= 10;
        b += s[4] - '0';

        if (b > 12 && a < 13)
        {
            cout << "MM/DD/YYYY" << endl;
        }
        else if (a > 12 && b < 13)
        {
            cout << "DD/MM/YYYY" << endl;
        }
        else
        {
            cout << "BOTH" << endl;
        }
    }
}