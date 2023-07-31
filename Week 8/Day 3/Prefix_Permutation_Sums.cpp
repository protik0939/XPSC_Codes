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
const int N = 2e5 + 5;

int main()
{
    somoy;
    tc
    {
        int n;
        cin >> n;
        bool dkf = false;
        map<ll, ll> mp;
        vl vct(n);
        f(i, 0, n - 1)
        {
            cin >> vct[i];
        }
        vl dif(n - 1);
        dif[0] = 0;
        f(i, 1, n - 1)
        {
            dif.pb(vct[i] - vct[i - 1]);
        }
        f(i, 0, dif.size())
        {
            if (mp[dif[i]] > 0)
            {
                dkf = true;
                break;
            }
            mp[dif[i]]++;
        }
        if (dkf)
        {
            cout << "NO" << endl;
        }
        else
        {
            srt(dif);
            ll q = vct[vct.size() - 1] - dif[dif.size() - 1];
            if (q < 0)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}