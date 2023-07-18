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
        double a, b, tmp;
        cin >> a >> b;
        tmp = a * .1;
        a -= tmp;
        if (a > b)
        {
            cout << "DINING" << endl;
        }
        else if (a < b)
        {
            cout << "ONLINE" << endl;
        }
        else
        {
            cout << "EITHER" << endl;
        }
    }
}