#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n;
        x = 1 + log10(n);
        y = pow(10, x - 1);
        cout << n - y << endl;
    }
}