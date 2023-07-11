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
        bool nai = true;
        cin >> n;
        while (n > 1)
        {
            if (n % 2 == 1)
            {
                cout << "YES" << endl;
                nai = false;
                break;
            }
            n/=2;
        }
        if (nai)
        {
            cout << "NO" << endl;
        }
    }
}