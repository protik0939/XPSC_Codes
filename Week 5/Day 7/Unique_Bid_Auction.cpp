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
        ll n;
        cin >> n;
        ll arr[n];
        map<ll, ll> x;
        map<ll, ll> ind;
        vector<ll> prt;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            x[arr[i]]++;
            ind[arr[i]] = i + 1;
        }

        for (ll i = 0; i < n; i++)
        {
            if (x[arr[i]] == 1)
            {
                prt.push_back(arr[i]);
            }
        }
        if (prt.empty())
        {
            cout << "-1" << endl;
        }
        else
        {
            sort(prt.begin(), prt.end());
            cout << ind[prt[0]] << endl;
        }
    }
}