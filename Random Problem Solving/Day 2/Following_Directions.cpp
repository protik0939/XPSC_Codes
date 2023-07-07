#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int left = 0, right = 0;
        bool crct = true;
        for (int i = 0; i < n; i++)
        {
            char c = s[i];
            if (c == 'L')
            {
                left--;
            }
            else if (c == 'R')
            {
                left++;
            }
            else if (c == 'U')
            {
                right++;
            }
            else
            {
                right--;
            }

            if (left == 1 && right == 1)
            {
                cout << "YES" << endl;
                crct = false;
                break;
            }
        }
        if (crct)
        {
            cout << "NO" << endl;
        }
    }
}