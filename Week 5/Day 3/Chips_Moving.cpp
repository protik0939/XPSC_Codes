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
    ll n, evn = 0, odd = 0;
    cin >> n;
    while (n--)
    {
        ll x;
        cin >> x;
        if (x % 2 == 0)
        {
            evn++;
        }
        else
        {
            odd++;
        }
    }
    cout << min(evn, odd) << endl;
}