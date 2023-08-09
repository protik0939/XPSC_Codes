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

int main()
{
    somoy;
    ll n, k;
    cin >> n >> k;
    deque<ll> arr;
    f(i, 0, n)
    {
        ll x;
        cin >> x;
        arr.pb(x);
    }
    if (k >= n - 1)
    {
        cout << n << endl;
    }
    else
    {
        ll res = 0;
        while (1)
        {
            ll a = arr.front();
            arr.pop_front();
            ll b = arr.front();
            arr.pop_front();
            if (res == k)
            {
                cout << a << endl;
                break;
            }
            else if (a > b)
            {
                arr.push_front(a);
                arr.pb(b);
                res++;
            }
            else
            {
                arr.push_front(b);
                arr.pb(a);
                res = 0;
                res++;
            }
        }
    }
}