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
        double a, b;
        cin >> a >> b;
        a = 100 - a;
        b = 200 - ((200 * b) / 100);
        if (a < b)
        {
            cout << "FIRST" << endl;
        }
        else if (a > b)
        {
            cout << "SECOND" << endl;
        }
        else
        {
            cout << "BOTH" << endl;
        }
    }
}