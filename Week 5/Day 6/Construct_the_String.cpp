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
        ll n, a, b;
        cin >> n >> a >> b;
        string res = "";
        string car = "abcdefghijklmnopqrstuvwxyz";
        ll j = 0;
        for (ll i = 0; i < n; i++)
        {
            res += car[j];
            j++;
            if (j == b)
            {
                j = 0;
            }
        }
        cout << res << endl;
    }
}