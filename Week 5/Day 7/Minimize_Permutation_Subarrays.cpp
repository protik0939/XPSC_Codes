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
        ll n, l, r;
        cin >> n;
        ll arr[n+1];
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }

        map<ll,ll>indx;
        for (int i = 1; i <= n; i++)
        {
            indx[arr[i]] = i;
        }

        if (indx[n] > min(indx[1], indx[2]) && indx[n] < max(indx[1], indx[2]))
        {
            l = indx[1];
            r = indx[2];
        }
        else if (indx[n] < indx[1] && indx[2] > indx[1])
        {
            l = indx[1];
            r = indx[n];
        }
        else if (indx[n] < indx[2] && indx[2] < indx[1])
        {
            l = indx[2];
            r = indx[n];
        }
        else if (indx[n] > indx[2] && indx[2] > indx[1])
        {
            l = indx[2];
            r = indx[n];
        }
        else if (indx[n] > indx[1] && indx[2] < indx[1])
        {
            l = indx[1];
            r = indx[n];
        }

        cout << l << " " << r << endl;
    }
}