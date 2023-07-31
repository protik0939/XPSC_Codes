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
    vl arr(50, 1);
    f(i, 2, 50)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }

    tc
    {
        ll n, k;
        cin >> n >> k;
        if (k >= 36)
            cout << 0 << endl;
        else
        {
            ll res = 0;
            ll x = arr[k - 2];
            ll y = arr[k - 3];
            for (ll i = 0; i <= n; i++)
            {
                ll z = (n - x * i);
                if (i < z / y || z < 0)
                    continue;
                if (z % y == 0)
                {
                    res += 1;
                }
                else
                {
                    res += 0;
                }
            }
            cout << res << endl;
        }
    }
}