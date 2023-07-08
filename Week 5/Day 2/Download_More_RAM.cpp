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
        ll n, k;
        cin >> n >> k;
        bool print_hoise = false;
        vector<ll> arr(n), brr(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (ll i = 0; i < n; i++)
        {
            cin >> brr[i];
        }

        vector<pair<ll, ll>> ram;
        for (ll i = 0; i < n; i++)
        {
            ram.push_back({arr[i], brr[i]});
        }

        sort(ram.begin(), ram.end());

        for (ll i = 0; i < n; i++)
        {
            if (ram[i].first > k)
            {
                cout << k << endl;
                print_hoise = true;
                break;
            }
            else
            {
                k += ram[i].second;
            }
        }
        if (!print_hoise)
        {
            cout << k << endl;
        }
    }
}