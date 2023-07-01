#include <bits/stdc++.h>
using namespace std;

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
        int res = n;
        int lft = 0, rgt = n - 1;
        while (lft < rgt)
        {
            if ((s[lft] != s[rgt]))
            {
                lft++;
                rgt--;
                res -= 2;
            }
            else
            {
                break;
            }
        }
        cout << res << endl;
    }

    return 0;
}