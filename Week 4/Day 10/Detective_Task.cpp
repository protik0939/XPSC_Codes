#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int x = s.size() - 1, y = 0, n = s.size();

        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == '1')
            {
                y = i;
                break;
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                x = i;
                break;
            }
        }

        cout << x - y + 1 << endl;;
    }

    return 0;
}
