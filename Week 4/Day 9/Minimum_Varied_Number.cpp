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
        string res = "";
        for (int i = 9; i > 0; i--)
        {
            if (n >= i)
            {
                res = char('0' + i) + res;
                n -= i;
            }
        }
        cout << res << endl;
    }
}