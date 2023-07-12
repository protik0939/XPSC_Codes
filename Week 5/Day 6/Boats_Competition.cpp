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
        vector<ll> arr;
        for (int i = 0; i < n; i++)
        {
            ll tmp;
            cin >> tmp;
            arr.push_back(tmp);
        }
        sort(arr.begin(), arr.end());
        int ans = 0;
        for (int i = 1; i <= 101; i++)
        {
            int l = 0;
            int r = n - 1;
            int S = 0;

            while (l < r)
            {
                if (arr[l] + arr[r] > i)
                {
                    r--;
                }
                else if (arr[l] + arr[r] < i)
                {
                    l++;
                }
                else
                {
                    S++;
                    l++;
                    r--;
                }
            }

            ans = max(ans, S);
        }
        cout << ans << endl;
    }
}