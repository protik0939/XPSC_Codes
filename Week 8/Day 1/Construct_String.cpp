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
#define f(i, n) for (ll i = 0; i < n; i++)
#define fr(i, n) for (ll i = n - 1; i >= 0; i--)
#define f1(i, n) for (ll i = 1; i <= n; i++)
#define fr1(i, n) for (ll i = n; i > 0; i--)
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
int main()
{
    somoy;
    tc
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        ll cnt = 1;
        f(i, n)
        {
            if (s[i] == s[i + 1])
            {
                cnt++;
            }
            else
            {
                if (cnt % 2 == 0)
                {
                    cout << string(2, s[i]);
                }
                else
                {
                    cout << s[i];
                }
                cnt = 1;
            }
        }
        cout << endl;
    }
}