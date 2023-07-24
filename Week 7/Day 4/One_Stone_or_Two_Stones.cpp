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
        cin >> a >> b;
        if (a == b)
        {
            if (a % 2 == 0)
            {
                cout << "CHEFINA" << endl;
            }
            else
            {
                cout << "CHEF" << endl;
            }
        }
        else if (abs(a - b) < 2)
        {
            ll x = min(a, b);
            if ((x - 1) % 2 == 0)
            {
                cout << "CHEF" << endl;
            }
            else
            {
                cout << "CHEFINA" << endl;
            }
        }
        else
        {
            if (a > b)
            {
                cout << "CHEF" << endl;
            }
            else
            {
                cout << "CHEFINA" << endl;
            }
        }
    }
}