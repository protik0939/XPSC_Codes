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

        if (n % 2)
        {
            cout << -1 << "\n";
        }
        else
        {
            for (ll i = 0; i < n - 1; i += 2)
            {
                cout << i + 2 << " " << i + 1 << " ";
            }
            cout << endl;
        }
    }
}