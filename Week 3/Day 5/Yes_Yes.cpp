#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string y = "Yes";
        while (y.size() < 50)
        {
            y += y;
        }
        bool q = false;
        int n = y.size();
        int m = s.size();
        for (int i = 0; i <= n - m; i++)
        {
            if (y.substr(i, m) == s)
            {
                q = true;
            }
        }
        if (q)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}