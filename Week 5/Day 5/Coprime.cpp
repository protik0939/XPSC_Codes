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
        int n;
        cin >> n;
        vector<int> arr(1002);
        vector<int> brr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> brr[i];
            arr[brr[i]] = i + 1;
        }
        int ans = 0;
        for (int i = 1; i <= 1000; i++)
        {
            for (int j = 1; j <= 1000; j++)
            {
                if (arr[i] != 0 && arr[j] != 0 && __gcd(i, j) == 1)
                {
                    ans = max(ans, arr[i] + arr[j]);
                }
            }
        }
        if (ans)
        {
            cout << ans << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}