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
        ll n, x, s = 0;
        cin >> n;
        ll q = n;
        while (q--)
        {
            cin >> x;
            s += x;
        }
        if (s % n == 0)
        {
            cout << s / n << endl;
        }
        else
        {
            cout << (s / n) + 1 << endl;
        }
    }
}