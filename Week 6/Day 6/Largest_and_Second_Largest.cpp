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
        vector<ll> vt(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> vt[i];
        }
        sort(vt.begin(), vt.end());
        vt.erase(unique(vt.begin(), vt.end()), vt.end());
        cout << vt[vt.size() - 1] + vt[vt.size() - 2] << endl;
    }
}