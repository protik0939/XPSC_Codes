#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int mid = (n * 2 - 1) / 2;

    for (int i = n - 1; i >= 0; i--)
    {
        for (int k = 0; k < i; k++)
        {
            cout << " ";
        }
        for (int j = 0; j < n * 2 - 1; j++)
        {
            if (abs(mid - i) >= abs(mid - j))
            {
                cout << "*";
            }
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < i; k++)
        {
            cout << " ";
        }
        for (int j = 0; j < n * 2 - 1; j++)
        {
            if (abs(mid - i) >= abs(mid - j))
            {
                cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}