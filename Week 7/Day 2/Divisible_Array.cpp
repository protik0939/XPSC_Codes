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
        if (n % 2 == 0)
        {
            for (ll i = 1; i < n; i++)
            {
                cout << i * 2 << " ";
            }
            cout << n * 2 << endl;
        }
        else
        {
            for (ll i = 1; i < n; i++)
            {
                cout << i << " ";
            }
            cout << n << endl;
        }
    }
}