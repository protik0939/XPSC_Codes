#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll ans = 0;
        while (n)
        {
            ans += n;
            n /= 2;
        }
        cout << ans << endl;
    }
}