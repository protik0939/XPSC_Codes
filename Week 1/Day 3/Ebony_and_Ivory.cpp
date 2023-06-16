#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    bool x = false;
    for (int i = 0; i <= c/a ; i++)
    {
        for (int j = 0; j <= c/b ; j++)
        {
            if (a * i + b * j == c || a * j + b * i == c || a * i + b * i == c || a * j + b * j == c)
            {
                x = true;
                break;
            }
        }
    }
    if (x)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}