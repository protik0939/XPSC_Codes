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
        ll n;
        cin >> n;
        if (n >= 1 && n <= 10)
        {
            cout << "Lower Double" << endl;
        }
        else if (n >= 11 && n <= 15)
        {
            cout << "Lower Single" << endl;
        }
        else if (n >= 16 && n <= 25)
        {
            cout << "Upper Double" << endl;
        }
        else
        {
            cout << "Upper Single" << endl;
        }
    }
}