#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k, n;
        cin >> k >> n;
        int m = 1, x = 0;
        for (int i = 1; i <= k; i++)
        {
            m += x;
            int dif1 = n-m;
            int dif2 = k-i;
            if (dif1 >= dif2)
            {
                cout << m << " ";
            }
            else
            {
                m -= x;
                m++;
                cout << m << " ";
            }
            x++;
        }
        cout << endl;
    }
    return 0;
}