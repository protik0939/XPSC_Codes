#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (1)
    {
        n += 1;
        int w,x,y,z;
        int tmp = n;
        z = tmp%10;
        tmp/=10;
        y = tmp%10;
        tmp/=10;
        x = tmp%10;
        tmp/=10;
        w = tmp;
        if (w != x && w != y && w != z && x != y && x != z && y != z)
        {
            break;
        }
    }
    cout << n << endl;
    return 0;
}