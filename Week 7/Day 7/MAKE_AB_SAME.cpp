#include <bits/stdc++.h>

#define ll long long int
#define somoy                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define unq(v) v.erase(unique(all(v)), v.end())
#define pb push_back
#define fi(i, n) for (ll i = 0; i < n; i++)
#define fj(j, n) for (ll j = 0; j < n; j++)
#define fk(k, n) for (ll k = 0; k < n; k++)
#define fi1(i, n) for (ll i = 1; i <= n; i++)
#define fj1(j, n) for (ll j = 1; j <= n; j++)
#define fk1(k, n) for (ll k = 1; k <= n; k++)
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
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vl arr(n), brr(n);
        ll az = 0, ao = 0, bz = 0, bo = 0;
        fi(i, n)
        {
            cin >> arr[i];
            if (arr[i] == 0)
                az++;
            else
                ao++;
        }
        bool flag = false;
        fi(i, n)
        {
            cin >> brr[i];
            if (brr[i] == 0)
            {
                bz++;
            }
            else
            {
                bo++;
            }
            if (arr[i] == 1 && brr[i] == 0)
            {
                flag = true;
            }
        }
        if (flag)
        {
            cout << "NO" << endl;
        }
        else
        {
            if (ao == 0 && bo > 0)
            {
                cout << "NO" << endl;
            }
            else if (arr[n - 1] != brr[n - 1] || arr[0] != brr[0])
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }
}