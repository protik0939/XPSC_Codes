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
        ll tmp = n / 10;
        ll nn = tmp * 10;
        if (abs(n - nn) > 4)
        {
            cout << 100 - (nn + 10) << endl;
        }
        else
        {
            cout << 100 - nn << endl;
        }
    }
}