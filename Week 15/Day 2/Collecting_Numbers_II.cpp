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
#define allr(v) v.rbegin(), v.rend()
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
#define ys cout << "YES" << endl
#define no cout << "NO" << endl
#define ses cout << endl;
#define sz(x) x.size()
#define ee endl
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define fbo(x, n) *x.find_by_order(n)
#define ook(x, n) x.order_of_key(n)
#define fi first
#define sc second

string intToBinary(ll x)
{
    string s;
    while (x > 0)
    {
        s += (x % 2 ? '1' : '0');
        x /= 2;
    }
    reverse(s.begin(), s.end());
    return s;
}

bool isPerfectSquare(ll x)
{
    if (x >= 0)
    {
        ll sr = sqrt(x);
        return (sr * sr == x);
    }
    return false;
}

bool isPowerOfTwo(ll x)
{
    return (x && (!(x & (x - 1))));
}

bool is_prime(ll n)
{
    if (n < 2)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;
    for (ll i = 3; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

bool isVowel(char ch)
{
    ch = tolower(ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        return true;
    return false;
}

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

bool pal(const string &str)
{
    string rts = str;
    rvrs(rts);
    return str == rts;
}
/*
const int N = 1e5 + 5;
ll pr[N];
ll prl[N];
ll prsz[N];
struct DSU
{
public:
    void dsu_set(ll n)
    {
        for (ll i = 0; i <= n; i++)
        {
            pr[i] = -1;
            prl[i] = 0;
            prsz[i] = 1;
        }
    }

    ll dsu_find(ll n)
    {
        if (pr[n] == -1)
            return n;
        ll ld = dsu_find(pr[n]);
        pr[n] = ld;
        return ld;
    }
    void dsu_union_by_rank(ll a, ll b)
    {
        ll ldA = dsu_find(a);
        ll ldB = dsu_find(b);
        if (ldA != ldB)
        {
            if (prl[ldA] > prl[ldB])
            {
                pr[ldB] = ldA;
            }
            else if (prl[ldB] > prl[ldA])
            {
                pr[ldA] = ldB;
            }
            else
            {
                pr[ldB] = ldA;
                prl[ldA]++;
            }
        }
    }
    void dsu_union_by_size(ll a, ll b)
    {
        ll ldA = dsu_find(a);
        ll ldB = dsu_find(b);
        if (ldA != ldB)
        {
            if (prsz[ldA] > prsz[ldB])
            {
                pr[ldB] = ldA;
                prsz[ldA] += prsz[ldB];
            }
            else
            {
                pr[ldA] = ldB;
                prsz[ldB] += prsz[ldA];
            }
        }
    }
};
*/
/*---------------------Code---------------------*/

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll l = 1;
    ll idx[n + 2] = {0};
    ll a[n + 1] = {0};
    idx[n + 1] = n + 1;
    f1(i, 1, n)
    {
        ll x;
        cin >> x;
        idx[x] = i;
        a[i] = x;
    }
    ll c = 1;
    f1(i, 1, n)
    {
        if (l > idx[i])
            c++;
        l = idx[i];
    }
    while (m--)
    {
        ll x, y;
        cin >> x >> y;
        ll r = a[x], s = a[y];
        swap(a[x], a[y]);
        if (idx[r - 1] <= idx[r] && idx[r - 1] > y)
        {
            c++;
        }
        if (idx[r - 1] > idx[r] && idx[r - 1] <= y)
        {
            c--;
        }
        if (idx[r] <= idx[r + 1] && y > idx[r + 1])
        {
            c++;
        }
        if (idx[r] > idx[r + 1] && y <= idx[r + 1])
        {
            c--;
        }
        idx[r] = y;
        if (idx[s - 1] <= idx[s] && idx[s - 1] > x)
        {
            c++;
        }
        if (idx[s - 1] > idx[s] && idx[s - 1] <= x)
        {
            c--;
        }
        if (idx[s] <= idx[s + 1] && x > idx[s + 1])
        {
            c++;
        }
        if (idx[s] > idx[s + 1] && x <= idx[s + 1])
        {
            c--;
        }
        idx[s] = x;
        cout << c << endl;
    }
}

int main()
{
    somoy;
    //tc
    {
        solve();
    }
}