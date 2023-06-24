#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<ll> v[200005];
ll lf[200005];
bool vst[200005];
ll L_C(ll src);

int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll e = n - 1;
        memset(vst, false, sizeof(vst));
        memset (lf, 0, sizeof (lf));
        while (e--)
        {
            ll a, b;
            cin >> a >> b;
            v[a].push_back(b);
            v[b].push_back(a);
        }
        ll q;
        L_C(1);
        cin >> q;
        while (q--)
        {
            ll x, y;
            cin >> x >> y;
            cout << lf[x] * lf[y] << endl;
        }
        for (ll i = 1; i <= n; i++)
        {
            v[i].clear();
        }
    }
}

ll L_C(ll src)
{
    vst[src] = true;
    ll ans = 0;
    bool l = true;
    for (ll i = 0; i < v[src].size(); i++)
    {
        if (!vst[v[src][i]])
        {
            l = false;
            ans += L_C(v[src][i]);
        }
    }
    if (l)
    {
        return lf[src] = 1;
    }
    else
    {
        return lf[src] = ans;
    }
}