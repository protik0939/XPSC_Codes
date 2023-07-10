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
        ll a, b;
        cin >> a >> b;
        char gd[a][b];
        for (ll i = 0; i < a; i++)
        {
            for (ll j = 0; j < b; j++)
            {
                cin >> gd[i][j];
            }
        }
        for (ll i = a - 1; i >= 0; i--)
        {
            for (ll j = 0; j < b; j++)
            {
                if (gd[i][j] == '*' && gd[i + 1][j] == '.')
                {
                    ll tmp = i;
                    while (tmp + 1 < a && gd[tmp + 1][j] == '.')
                    {
                        tmp++;
                    }
                    swap(gd[i][j], gd[tmp][j]);
                }
            }
        }
        for (ll i = 0; i < a; i++)
        {
            for (ll j = 0; j < b; j++)
            {
                cout << gd[i][j];
            }
            cout << endl;
        }
    }
}
