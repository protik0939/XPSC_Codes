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
        vector<ll> a, b;
        ll n;
        cin >> n;
        while (n--)
        {
            ll tmp;
            cin >> tmp;
            a.push_back(tmp);
        }
        sort(a.begin(), a.end());
        for (ll i = 0; i < a.size() - 1; i++)
        {
            b.push_back(a[i + 1] - a[i]);
        }
        sort(b.begin(), b.end());
        cout << b[0] << endl;
    }
}