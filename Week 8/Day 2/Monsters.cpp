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

bool cmp(pair<int, int> p, pair<int, int> q)
{
    if (p.second > q.second)
    {
        return true;
    }
    if (p.second < q.second)
    {
        return false;
    }
    if (p.first < q.first)
    {
        return true;
    }
    return false;
}

int main()
{
    somoy;
    tc
    {
        ll n, k;
        cin >> n >> k;
        pll res[n];
        f(i, 0, n)
        {
            ll x;
            cin >> x;
            res[i].first = i + 1;
            res[i].second = (x - 1) % k;
        }
        sort(res, res + n, cmp);
        f(i, 0, n)
        {
            cout << res[i].first << " ";
        }
        cout << endl;
    }
}