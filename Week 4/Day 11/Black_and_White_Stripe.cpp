#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll f, g;
        cin >> f >> g;
        string s;
        cin>>s;
        ll arr[f];
        for (ll i = 0; i < f; i++)
        {
            if (s[i] == 'B')
            {
                arr[i] = 1;
            }
            else
            {
                arr[i] = 0;
            }
        }
        ll h = 0, tmp;
        for (ll i = 0; i < g; i++)
        {
            if (arr[i] == 1)
            {
                h++;
            }
        }
        tmp = h;
        for (ll i = g; i < f; i++)
        {
            if (arr[i - g] == 1)
            {
                tmp--;
            }
            if (arr[i] == 1)
            {
                tmp++;
            }
            h = max(h, tmp);
        }
        cout << g - h << endl;
    }
}