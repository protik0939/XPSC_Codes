#include <bits/stdc++.h>

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

using namespace std;

ll diff(ll &a, ll &b)
{
    for (int i = 30; i >= 0; --i)
    {
        ll cur = 1ll << i;
        if ((a & cur) && !(b & cur))
        {
            return i;
        }
    }
    return 0;
}

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {

        ll a, b, c;
        cin >> a >> b >> c;

        if (a == b || b == c || a == c)
        {
            cout << "-1" << endl;
        }
        else if (a < b && b < c)
        {
            cout << 0 << endl;
        }
        else
        {
            ll ans = 0;

            if (a > b)
            {
                ans = (1ll << diff(a, b));
            }

            if (b > c)
            {
                ans |= (1ll << diff(b, c));
            }

            if ((a ^ ans) < (b ^ ans) && (b ^ ans) < (c ^ ans))
            {
                cout << ans << endl;
            }

            else
            {
                cout << "-1" << endl;
            }
        }
    }
    return 0;
}