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
        string s;
        cin >> s;
        int n, l, r, u, d, x, y;
        l = r = u = d = 0;
        n = s.length();
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
            {
                l++;
            }
            else if (s[i] == 'R')
            {
                r++;
            }
            else if (s[i] == 'U')
            {
                u++;
            }
            else if(s[i] == 'D')
            {
                d++;
            }
        }
        x = min(l, r);
        y = min(u, d);
        if (x == 0 && y == 0)
        {
            cout << 0 << endl;
        }
        else if (x == 0 || y == 0)
        {
            cout << 2 << endl;
            if (x == 0)
            {
                cout << "UD" << endl;
            }
            else
            {
                cout << "LR" << endl;
            }
        }
        else
        {
            cout << 2 * (x + y) << endl;
            for (int i = 0; i < x / 2; i++)
            {
                cout << "L";
            }
            for (int i = 0; i < y; i++)
            {
                cout << "U";
            }
            for (int i = 0; i < x; i++)
            {
                cout << "R";
            }
            for (int i = 0; i < y; i++)
            {
                cout << "D";
            }
            for (int i = 0; i < x / 2; i++)
            {
                cout << "L";
            }
            if (x % 2 != 0)
            {
                cout << "L";
            }
            cout << endl;
        }
    }
}