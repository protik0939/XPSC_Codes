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

int main()
{
    somoy;
    int n, k, q;
    cin >> n >> k >> q;
    vl arr;
    for (int i = 0, x; i < n; i++)
    {
        cin >> x;
        arr.pb(x);
    }
    arr.pb(0);
    vector<pair<pll, ll>> tmp;
    for (int i = 0, l, r, v; i < k; ++i)
    {
        cin >> l >> r >> v;
        tmp.pb({{l-1, r}, v});
    }
    vl mp(k + 1);
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        mp[l-1]++;
        mp[r]--;
    }
    for (int i = 1; i <= k; ++i)
        mp[i] += mp[i - 1];

    vl sm(n + 1);
    for (int i = 0; i < k; ++i)
    {
        int l = tmp[i].first.first;
        int r = tmp[i].first.second;
        ll v = tmp[i].second;

        sm[l] += v * mp[i];
        sm[r] -= v * mp[i];
    }

    for (int i = 1; i < n; i++)
        sm[i] += sm[i - 1];

    for (int i = 0; i < n; i++)
        arr[i] += sm[i];

    f(i, 0, n)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}