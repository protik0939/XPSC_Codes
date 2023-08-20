/*
________________________________________________________________

    ████████████████████████████████████████████████████████
    █▄─▄▄─█▄─▄▄▀█─▄▄─█─▄─▄─█▄─▄█▄─█─▄███─▄▄─█░▄▄░█▄▄▄░█░▄▄░█
    ██─▄▄▄██─▄─▄█─██─███─████─███─▄▀████─██─█▄▄▄░██▄▄░█▄▄▄░█
    ▀▄▄▄▀▀▀▄▄▀▄▄▀▄▄▄▄▀▀▄▄▄▀▀▄▄▄▀▄▄▀▄▄▀▀▀▄▄▄▄▀▄▄▄▄▀▄▄▄▄▀▄▄▄▄▀
________________________________________________________________

*/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll long long int
#define somoy                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define tc    \
    ll t;     \
    cin >> t; \
    while (t--)
#define all(v) v.begin(), v.end()
#define unq(v) v.erase(unique(all(v)), v.end())
#define srt(v) sort(all(v))
#define srtr(v) sort(v.rbegin(), v.rend())
#define rvrs(v) reverse(all(v))
#define pb push_back
#define f(i, c, n) for (ll i = c; i < n; i++)
#define fr(i, c, n) for (ll i = n - 1; i >= c; i--)
#define f1(i, c, n) for (ll i = c; i <= n; i++)
#define fr1(i, c, n) for (ll i = n; i > c; i--)
#define vi vector<int>
#define vl vector<ll>
#define vs vector<string>
#define vb vector<bool>
#define vpi vector<pair<ll, ll>>
#define vmax(v) *max_element(all(v))
#define vmin(v) *min_element(all(v))
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pss pair<string, string>
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define fbo(x, n) *x.find_by_order(n)
#define ook(x, n) x.order_of_key(n)

void solve()
{
    ll n, m, d;
    cin >> n >> m >> d;
    vl a(m);
    f(i, 0, m)
    {
        cin >> a[i];
    }
    ll sum = m;
    f(i, 0, m - 1)
    {
        sum += (a[i + 1] - a[i] - 1) / d;
    }
    if (a[0] != 1)
    {
        sum += ((a[0] - 2) / d) + 1;
    }
    sum += (n - a[m - 1]) / d;
    vl con(m);
    ll ans = LLONG_MAX;
    f(i, 1, m - 1)
    {
        ll z = sum;
        z -= (a[i] - a[i - 1] - 1) / d;
        z -= (a[i + 1] - a[i] - 1) / d;
        z--;
        z += (a[i + 1] - a[i - 1] - 1) / d;
        con[i] = z;
        ans = min(ans, z);
    }
    {
        ll z = sum;
        if (a[0] != 1)
        {
            z -= (a[0] - 2) / d;
            z -= 1;
        }
        z--;
        z -= (a[1] - a[0] - 1) / d;
        z += (a[1] - 2) / d;
        z++;
        ans = min(ans, z);
        con[0] = z;
    }
    {
        ll z = sum;
        z -= (n - a[m - 1]) / d;
        z--;
        z -= (a[m - 1] - a[m - 2] - 1) / d;
        z += (n - a[m - 2]) / d;
        ans = min(ans, z);
        con[m - 1] = z;
    }
    cout << ans << " ";
    ll cnt = 0;
    for (int i = 0; i < m; i++)
    {
        cnt += (con[i] == ans);
    }
    cout << cnt << endl;
}

int main()
{
    somoy;
    tc
    {
        solve();
    }
}