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
ll k = 1;
void solve()
{
    ll a, b, c, d, e, f, n, x[10005];
    cin >> a >> b >> c >> d >> e >> f >> n;
    for (int i = 0; i <= n; i++)
    {

        if (i == 0)
        {
            x[i] = a;
            continue;
        }
        if (i == 1)
        {
            x[i] = b;
            continue;
        }
        if (i == 2)
        {
            x[i] = c;
            continue;
        }
        if (i == 3)
        {
            x[i] = d;
            continue;
        }
        if (i == 4)
        {
            x[i] = e;
            continue;
        }
        if (i == 5)
        {
            x[i] = f;
            continue;
        }
        x[i] = x[i - 1] + x[i - 2] + x[i - 3] + x[i - 4] + x[i - 5] + x[i - 6];
        x[i] = x[i] % 10000007;
    }
    x[n] %= 10000007;

    cout << "Case " << k << ": " << x[n] << endl;
    k++;
}

int main()
{
    somoy;
    tc
    {
        solve();
    }
}