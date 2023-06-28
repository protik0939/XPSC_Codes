#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        int m = a.size();
        int n = b.size();
        if (a == b)
        {
            cout << "=" << endl;
        }
        else if (a[m - 1] == b[n - 1])
        {
            if (a[m - 1] == 'S')
            {
                if (m > n)
                {
                    cout << "<" << endl;
                }
                else
                {
                    cout << ">" << endl;
                }
            }
            else if (a[m - 1] == 'L')
            {
                if (m > n)
                {
                    cout << ">" << endl;
                }
                else
                {
                    cout << "<" << endl;
                }
            }
        }
        else
        {
            char x = a[m - 1];
            char y = b[n - 1];
            if (x == 'S' && y == 'M')
            {
                cout << "<" << endl;
            }
            else if (x == 'M' && y == 'S')
            {
                cout << ">" << endl;
            }
            else if (x == 'S' && y == 'L')
            {
                cout << "<" << endl;
            }
            else if (x == 'L' && y == 'S')
            {
                cout << ">" << endl;
            }
            else if (x == 'M' && y == 'L')
            {
                cout << "<" << endl;
            }
            else if (x == 'L' && y == 'M')
            {
                cout << ">" << endl;
            }
        }
    }
}