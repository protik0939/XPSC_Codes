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
        ll x, y, z = 1e9+7;
        cin>>x>>y;
        ll res = 1;
        while(x--)
        {
            res = (res*y)%z;
            if(y > 1)
            {
                y--;
            }
        }
        cout<< res << endl;
    }
}