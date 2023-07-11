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
        map<ll, ll> mp;
        map<ll, ll> pq;
        ll a;
        cin >> a;
        for (ll i = 0; i < a; i++)
        {
            ll b;
            cin >> b;
            for (ll j = 0; j < b; j++)
            {
                ll x;
                cin >> x;
                mp[x] = i;
            }
        }
        for (auto it : mp)
        {
            pq[it.second] = it.first;
        }
        if (pq.size() < a)
        {
            cout << "-1" << endl;
            continue;
        }
        for (auto it : pq)
        {
            cout << it.second << " ";
        }
        cout << endl;
    }
}