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
        ll p = 3;
        ll arr[2] = {0};
        while (p--)
        {
            ll n;
            cin >> n;
            arr[n]++;
        }
        if (arr[1] >= 2)
        {
            cout << "Not now" << endl;
        }
        else
        {
            cout << "Water filling time" << endl;
        }
    }
}