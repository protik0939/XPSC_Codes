#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, ans = 1000005;
        cin >> n;
        vector<ll> arr(n+1), brr;
        brr.push_back(0);
        for (ll i = 1; i <= n; i++)
        {
            cin >> arr[i];
            brr.push_back(brr[i - 1] + arr[i]);
        }
        ll cnt, num;
        for (ll i = 1; i <= n; i++)
        {
            cnt = i;
            num = i;
            for (ll j = i + 1; j <= n; j++)
            {
                if (brr[j] == brr[cnt] + brr[i])
                {
                    num = max(num, j - cnt);
                    cnt = j;
                }
            }
            if (cnt == n)
            {
                ans = min(ans, num);
            }
        }
        cout << ans << endl;
    }
}