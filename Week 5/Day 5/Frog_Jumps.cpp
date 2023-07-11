#include <bits/stdc++.h>
#define somoy                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
typedef long long int ll;
using namespace std;
int main()
{
    somoy;
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        ll mx = 0, vx = 0, k = s.size();

        for (ll i = 0; i < k; i++)
        {
            if (s[i] == 'R')
            {
                mx = max(mx, i + 1 - vx);
                vx = i + 1;
            }
        }
        mx = max(k + 1 - vx, mx);
        cout << mx << endl;
    }
}