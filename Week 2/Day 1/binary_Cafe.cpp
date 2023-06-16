#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n, k;
        cin >> n >> k;
        if (k > 29)
        {
            cout << n + 1 << endl;
        }
        else
        {
            long long int p = 1LL << k;
            cout << min(p, n + 1) << endl;
        }
    }
}
