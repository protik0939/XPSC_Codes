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
        ll n, e = 0, o = 0;
        cin >> n;
        string s;
        cin >> s;
        map<char, ll> cnt;
        for (ll i = 0; i < n; i++)
        {
            cnt[s[i]]++;
        }

        for (auto it : cnt)
        {
            if (it.second % 2 == 0)
            {
                e++;
            }
            else
            {
                o++;
            }
        }

        if (o > 1)
        {
            cout << "0" << endl;
        }
        else if (o == 1)
        {
            if (e == 0)
            {
                cout << "2" << endl;
            }
            else
            {
                cout << "1" << endl;
            }
        }
        else
        {
            cout << "1" << endl;
        }
    }
}
