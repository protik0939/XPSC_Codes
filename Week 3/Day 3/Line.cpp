#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        ll res = 0;
        vector<ll> tmp(n);

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
            {
                tmp[i] = (n - 1 - i) - i;
                res += i;
            }
            else
            {
                tmp[i] = i - (n - 1 - i);
                res += (n - 1 - i);
            }
        }

        sort(tmp.rbegin(), tmp.rend());

        for (int i = 0; i < n; i++)
        {
            if (tmp[i] > 0)
                res += tmp[i];
            cout << res << ' ';
        }

        cout << '\n';
    }
}