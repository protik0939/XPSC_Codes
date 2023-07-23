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
        ll a, b, cnt = 1;
        cin >> a >> b;
        if ((b > a + 1) || (b < 0 && abs(b) >= a))
        {
            cout << -1 << endl;
        }
        else
        {
            if (b > 0)
            {
                for (ll i = 0; i < a; i++)
                {
                    if (cnt != b)
                    {
                        cout << '+';
                        cnt++;
                    }
                    else
                    {
                        cout << '*';
                    }
                }
                cout << endl;
            }
            else
            {
                for (ll i = 0; i < a; i++)
                {
                    if (cnt != b)
                    {
                        cout << '-';
                        cnt--;
                    }
                    else
                    {
                        cout << '*';
                    }
                }
                cout << endl;
            }
        }
    }
}