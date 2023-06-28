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

        if (n == 1 || n == 3)
        {
            cout << -1 << endl;
        }
        else if (n == 2)
        {
            cout << "2 1" << endl;
        }
        else
        {
            for (int i = 3; i <= n; i++)
            {
                cout << i << " ";
            }
            cout << "2 1" << endl;
        }
    }
}