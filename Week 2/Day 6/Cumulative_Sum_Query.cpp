#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n], pr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i == 0)
        {
            pr[i] = arr[i];
        }
        else
        {
            pr[i] = arr[i] + pr[i - 1];
        }
    }

    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        if (l - 1 < 0)
        {
            cout << pr[r] << endl;
        }
        else
        {
            cout << pr[r] - pr[l - 1]<<endl;
        }
    }
}