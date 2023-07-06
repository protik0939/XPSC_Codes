#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string s, t;
        cin >> s >> t;

        if (t == "a")
        {
            cout << 1 << endl;
        }
        else
        {
            bool hae = true;
            for (ll i = 0; i < t.size(); i++)
            {
                if (t[i] == 'a')
                {
                    cout << -1 << endl;
                    hae = false;
                    break;
                }
            }

            if (hae)
            {
                ll n = s.size();
                ll ans = pow(2, n) - 1;
                cout << ans + 1 << endl;
            }
        }
    }
}