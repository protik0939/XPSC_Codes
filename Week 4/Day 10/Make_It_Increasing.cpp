#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, cnt = 0;
        cin >> n;
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        bool q = true;
        for (int i = n - 1; i > 0; i--)
        {
            if (arr[i] < i)
            {
                q = false;
                break;
            }
            while (arr[i - 1] >= arr[i])
            {
                arr[i - 1] /= 2;
                cnt++;
            }
        }
        if (q)
        {
            cout << cnt << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}