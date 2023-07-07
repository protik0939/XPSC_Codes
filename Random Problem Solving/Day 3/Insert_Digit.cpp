#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void printt(string x, ll y, char q)
{
    string ans = x.substr(0, y) + q + x.substr(y);
    cout << ans << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, d;
        cin >> n >> d;
        string num;
        cin >> num;
        bool inserted = false;
        for (ll i = 0; i < n; i++)
        {
            if (num[i] < '0' + d)
            {
                printt(num, i, '0' + d);
                inserted = true;
                break;
            }
        }
        if (!inserted)
        {
            printt(num, n, '0' + d);
        }
    }
    return 0;
}
