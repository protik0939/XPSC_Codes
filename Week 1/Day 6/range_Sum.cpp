#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    for (long long int i = 0; i < t; i++)
    {
        long long int m, n, sum;
        cin >> m >> n;
        long long int a = max(m,n);
        long long int b = min(m,n);
        long long int dif = (a-b)+1;
        sum = ((dif*(a + b)) / 2);
        cout << sum << endl;
    }
}