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
        ll n, cnt = 0;
        cin >> n;
        while (n != 50)
        {
            if (n > 50)
            {
                n -= 3;
                cnt++;
            }
            else
            {
                n += 2;
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}