#include <bits/stdc++.h>
#define somoy ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long int ll;
using namespace std;
int main()
{
    somoy;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll cnt = -1;
        if (n % 2 == 0)
        {
            cnt = 0;
        }
        else
        {
            n /= 10;
            while (n > 0)
            {
                if (n % 2 == 0)
                {
                    if (n >= 10)
                    {
                        cnt = 2;
                    }
                    else
                    {
                        cnt = 1;
                    }
                }
                n /= 10;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}