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
        ll n, m, k, cnt = 0;
        cin >> n >> m >> k;
        ll arr[m + 1];
        for (ll i = 0; i <= m; i++)
        {
            cin >> arr[i];
        }

        for (ll i = 0; i < m; i++)
        {
            if (__builtin_popcount(arr[i] ^ arr[m]) <= k)
            {
                cnt++;
            }
        }
        cout << cnt << endl;
}