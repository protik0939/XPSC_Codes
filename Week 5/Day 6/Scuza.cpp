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
        ll n, q;
        cin >> n >> q;
        ll arr[n], brr[q];
        vector<pair<ll, ll>> vct(q);
        vector<ll> ans(q);
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (ll i = 0; i < q; i++)
        {
            cin >> brr[i];
            vct[i].second = i;
            vct[i].first = brr[i];
        }
        sort(vct.begin(), vct.end());
        ll j = 0, sum = 0;
        for (ll i = 0; i < q; i++)
        {
            while (vct[i].first >= arr[j] && j < n)
            {
                sum += arr[j];
                j++;
            }
            ans[vct[i].second] = sum;
        }
        for (ll i=0; i<ans.size(); i++)
        {
            cout << ans[i] << " ";
        }

        cout << endl;
    }
}