#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int x, y;
        cin >> x >> y;
        int mul = x * y;
        int count = 0;
        while (mul != 0)
        {
            int temp = mul % 10;
            count++;
            mul /= 10;
        }
        if (count == 5)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}