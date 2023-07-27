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
#define pb push_back
#define f(i, n) for (ll i = 0; i < n; i++)
#define f1(i, n) for (ll i = 1; i <= n; i++)
#define vi vector<int>
#define vl vector<ll>
#define vs vector<string>
#define vb vector<bool>
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
        ll ns = n * n;
        ll arr[n][n];
        bool flag = true;
        ll nm1 = ns, nm2 = ns - 1;
        f(i, n)
        {
            f(j, n)
            {
                if (flag)
                {
                    arr[i][j] = nm1;
                    nm1 -= 2;
                    if ((nm1 % 2 == 0 && nm1 < 2) || (nm1 % 2 != 0 && nm1 < 1))
                    {
                        flag = false;
                    }
                }
                else
                {
                    arr[i][j] = nm2;
                    nm2 -= 2;
                }
            }
        }
        f(i, n)
        {
            f(j, n)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
}