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
#define unq(v) v.erase(unique(all(v)), v.end())
#define srt(v) sort(v.begin(), v.end())
#define rvrs(v) reverse(v.begin(), v.end())
#define pb push_back
#define f(i, n) for (ll i = 0; i < n; i++)
#define fr(i, n) for (ll i = n - 1; i >= 0; i--)
#define f1(i, n) for (ll i = 1; i <= n; i++)
#define fr1(i, n) for (ll i = n; i > 0; i--)
#define vi vector<int>
#define vl vector<ll>
#define vs vector<string>
#define vb vector<bool>
#define vpi vector<pair<ll, ll>>
#define vmax(v) *max_element(v.begin(), v.end())
#define vmin(v) *min_element(v.begin(), v.end())
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pss pair<string, string>

using namespace std;
int main()
{
    somoy;
    tc
    {
        ll n, a, b, sm = 0;
        cin >> n >> a >> b;
        f1(i, n)
        {
            if (i % 2 == 0)
            {
                sm += a;
            }
            else
            {
                sm += b;
            }
        }
        cout << sm << endl;
    }
}