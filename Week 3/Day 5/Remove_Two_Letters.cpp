#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string x = "  ";
        int res = 0;
        for (int i = 1; i < n; i++)
        {
            if (x[0] != s[i])
            {
                res++;
            }
            x = s.substr(i - 1, 2);
        }
        cout << res << endl;
    }
    return 0;
}