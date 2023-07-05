#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        bool q = true;
        ll n, ans = -1, res = 0;
        cin >> n;
        ll arr[n], brr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> brr[i];
        }
        for (int i = 0; i < n; i++)
        {
            res = abs(arr[i] - brr[i]);
            if (ans < res)
            {
                ans = res;
            }
        }
        for (int i = 0; i < n; i++)
        {
            arr[i] = arr[i] - ans;
            if (arr[i] < 0)
            {
                arr[i] = 0;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != brr[i])
            {
                q = false;
            }
        }
        if (q)
        {
            cout << "YES"<< endl;
        }
        else
        {
            cout << "NO"<< endl;
        }
    }
}