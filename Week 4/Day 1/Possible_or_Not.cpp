#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, b;
        cin >> n >> b;
        ll arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        ll chk = -1;
        for (int i = 0; i < n; i++)
        {
            ll tmp = (arr[i] & b);
            if (tmp == b)
            {
                chk &= arr[i];
            }
        }
        if (chk == b)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}