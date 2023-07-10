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
        ll n, k;
        cin >> n >> k;
        ll vagses = n % k;
        if (vagses <= k / 2)
        {
            cout << n << endl;
        }
        else
        {
            cout << ((n / k) * k) + (k / 2) << endl;
        }
    }
}