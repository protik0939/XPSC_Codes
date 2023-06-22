#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int m, s;
        cin >> m >> s;
        int arr[m];
        int maxx = 0;
        for (int i = 0; i < m; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < m; i++)
        {
            s += arr[i];
            maxx = max(maxx, arr[i]);
        }

        int sum = 0;
        int i = 1;
        for (i = 1; i <= 1000; i++)
        {
            sum += i;
            if (sum == s)
            {
                break;
            }
        }
        if (sum != s || maxx > i || maxx < m)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}