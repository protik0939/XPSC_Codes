#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        ll arr[n];
        ll O_c = 0, E_c = 0, res = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2 == 0)
            {
                E_c++;
            }
            else
            {
                O_c++;
            }
            res += arr[i];
        }

        for (int i = 0; i < q; i++)
        {
            ll ry, dt;
            cin >> ry >> dt;

            if (ry == 0)
            {
                res += (dt * E_c);
                if (dt % 2 == 1)
                {
                    O_c = n;
                    E_c = 0;
                }
            }
            else
            {
                res += (dt * O_c);
                if (dt % 2 == 1)
                {
                    E_c = n;
                    O_c = 0;
                }
            }
            cout << res << endl;
        }
    }
}
