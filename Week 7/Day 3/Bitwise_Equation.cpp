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
        ll n;
        cin >> n;
        if (n == 0)
        {
            cout << "3 1 4 5" << endl;
        }

        else if (n == 1)
        {
            cout << "4 1 2 3" << endl;
        }
        else if (n == 2)
        {
            cout << "4 2 3 1" << endl;
        }
        else if (n == 3)
        {
            cout << "4 3 1 2" << endl;
        }
        else if (n == 4)
        {
            cout << "8 2 7 3" << endl;
        }
        else
        {
            ll a = 1, b = 2, c = 3;
            ll d = n ^ (a & b | c);
            cout << a << " " << b << " " << c << " " << d << endl;
        }
    }
}