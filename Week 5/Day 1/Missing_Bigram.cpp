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
        int n;
        cin >> n;
        string s, tmp, res;
        for (int i = 0; i < n - 2; i++)
        {
            cin >> s;
            if (i == 0)
            {
                tmp = s;
                res += s;
            }
            else
            {
                if (tmp[1] == s[0])
                {
                    if (s[0] == s[1])
                    {
                        tmp = s;
                        res += s[1];
                    }
                    else
                    {
                        tmp = s;
                        res += s[1];
                    }
                }
                else
                {
                    tmp = s;
                    res += s;
                }
            }
        }

        while (res.size() < n)
        {
            res += 'a';
        }
        cout << res << endl;
    }
}
