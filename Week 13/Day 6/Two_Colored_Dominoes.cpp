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

/*---------------------Code---------------------*/

void solve()
{
    ll n, m;
    cin >> n >> m;
    char arr[n][m];
    ll brr[m] = {0};
    bool ck = 0;
    f(i, 0, n)
    {
        ll y = 0;
        f(j, 0, m)
        {
            char x;
            cin >> x;
            if (x == '.')
            {
                arr[i][j] = '.';
            }
            else if (x == 'L')
            {
                if (brr[j] == 0)
                {
                    arr[i][j] = 'W';
                }
                else
                {
                    arr[i][j] = 'B';
                }
                brr[j] ^= 1;
            }
            else if (x == 'R')
            {
                if (arr[i][j - 1] == 'W')
                {
                    arr[i][j] = 'B';
                }
                else
                {
                    arr[i][j] = 'W';
                }
            }
            else if (x == 'U')
            {
                if (y == 0)
                {
                    arr[i][j] = 'W';
                }
                else
                {
                    arr[i][j] = 'B';
                }
                y ^= 1;
            }
            else if (x == 'D')
            {
                if (arr[i - 1][j] == 'W')
                {
                    arr[i][j] = 'B';
                }
                else
                {
                    arr[i][j] = 'W';
                }
            }
        }
        if (y)
        {
            ck = 1;
        }
    }
    f(i, 0, m)
    {
        if (brr[i])
        {
            ck = 1;
        }
    }
    if (ck)
    {
        cout << -1 << ee;
    }
    else
    {
        f(i, 0, n)
        {
            f(j, 0, m)
            {
                cout << (char)(arr[i][j]);
            }
            ses
        }
    }
    ses
}

int main()
{
    somoy;
    tc
    {
        solve();
    }
}