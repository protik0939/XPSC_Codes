#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, l, res = INT_MAX;
        cin >> n >> l;
        string arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                {
                    continue;
                }
                ll ans = 0;
                for (int k = 0; k < l; k++)
                {
                    string a = arr[i];
                    string b = arr[j];
                    ans += abs((a[k] - b[k]));
                }
                res = min(ans, res);
            }
        }
        cout << res << endl;
    }
}