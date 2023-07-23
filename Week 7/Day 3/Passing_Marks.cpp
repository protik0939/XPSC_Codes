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
        ll n, x;
        cin >> n >> x;
        vector<ll> mk(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> mk[i];
        }
        sort(mk.begin(), mk.end(), greater<ll>());
        cout << mk[x - 1] - 1 << endl;
    }
}